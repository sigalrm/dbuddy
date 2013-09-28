#pragma once

#include <string>
#include <map>

#define SAVE_FILE ".nethack_buddy"

typedef std::map<std::string,std::string> StringMap;
typedef std::map<std::string,StringMap> StorageMap;

typedef const std::string & StorageKey;
typedef const std::string & StorageValue;

class Storage
{
private:
    StorageMap m_storage;

public:
    StorageValue get(StorageKey, StorageKey);
    StringMap & getMap(StorageKey);

    void put(StorageKey, StorageKey, StorageValue);

    void load();
    void save();

    void reset();
};
