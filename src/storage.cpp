#include "main.h"
#include "storage.h"
#include <unistd.h>
#include <string.h>
#include <fstream>

const std::string &
Storage::get(StorageKey type, StorageKey key) {
    return m_storage[type][key];
}

StringMap &
Storage::getMap(StorageKey type)
{
    return m_storage[type];
}

void
Storage::put(StorageKey type, StorageKey key, StorageValue value) {
    m_storage[type][key] = value;
}

void
Storage::load()
{
    char type[32], key[32], value[256];

    std::ifstream input(SAVE_FILE);
    if (!input.is_open()) {
	return;
    }

    while (1) {
	input.getline(type, sizeof(type));
	input.getline(key, sizeof(key));
	input.getline(value, sizeof(value));

	if (!(strlen(type) && strlen(key) && strlen(value)))
	    break;

	m_storage[type][key] = value;
    }

    input.close();
}

void
Storage::save()
{
    StorageMap::const_iterator i, j;
    StringMap::const_iterator k, l;
    int rc;

    FILE *output = fopen(SAVE_FILE, "w");
    if (output == NULL) {
    }

    for (i = m_storage.begin(), j = m_storage.end(); i != j; ++i) {
	StorageKey type = i->first;
	const StringMap &submap = i->second;

	for (k = submap.begin(), l = submap.end(); k != l; ++k) {
	    rc = fprintf(output, "%s\n%s\n%s\n",
			 type.c_str(),
			 k->first.c_str(),
			 k->second.c_str());
	    if (rc < 0) {
	    }
	}
    }

    rc = fclose(output);
    if (rc != 0) {
    }
}

void
Storage::reset()
{
    StorageMap::iterator i, j;
    StringMap::iterator k, l;

    int rc = unlink(SAVE_FILE);
    if (rc != 0) {
    }

    for (i = m_storage.begin(), j = m_storage.end(); i != j; ++i) {
	StringMap &submap = i->second;

	for (k = submap.begin(), l = submap.end(); k != l; ++k) {
	    k->second = "-";
	}
    }
}
