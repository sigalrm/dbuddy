#include "main.h"
#include "page_map.h"

static bool
MenuComp(char lhs, char rhs)
{
    int a = (lhs < 'a') ? (lhs - 'A' + 'z' + 1) : lhs;
    int b = (rhs < 'a') ? (rhs - 'A' + 'z' + 1) : rhs;

    return a < b;
}

MapPage::MapPage(BasePage *parent, StorageKey type): BasePage(parent), m_menu(&MenuComp), m_map(s->getMap(type))
{
}

void
MapPage::initMenu()
{
    char c = 'a';
    m_width = 0;

    for (StringMap::iterator i = m_map.begin(); i != m_map.end(); ++i)
    {
	m_menu[c] = i->first;
	m_width = std::max(m_width, (unsigned int)i->first.length());

	if (++c > 'z')
	    c = 'A';
    }
}

void
MapPage::enter()
{
    // addstr("\n");

    for (MenuMap::iterator i = m_menu.begin(); i != m_menu.end(); ++i)
    {
	waddch(stdscr, '\t');
	waddch(stdscr, i->first);
	addstr(" - ");
	addstr(i->second.c_str());
	columnTab(i->second, m_width);
	addstr(m_map[i->second].c_str());
	waddch(stdscr, '\n');
    }
}

void
MapPage::process(char c)
{
    if (m_menu.count(c)) {
	int x, y;
	char buf[128] = {0};

	getmaxyx(stdscr, y, x);
	move(y - 1, 0);
	addstr("Describe ");
	addstr(m_menu[c].c_str());
	addstr(": ");

	// load the current string into the input FIFO
	// XXX is there a better way to do this?
	std::string cur = m_map[m_menu[c]];
	if (cur.compare(DEFVAL) != 0)
	    for (x = cur.size() - 1; x >= 0; --x)
		ungetch(cur[x]);

	echo();
	wgetnstr(stdscr, buf, sizeof(buf) - 1);
	noecho();

	m_map[m_menu[c]] = *buf ? buf : DEFVAL;
	s->save();

	redraw();
    }
    else {
	// go back on space or enter in addition to esc
	if (c == ' ' || c == '\r')
	    c = 27;

	BasePage::process(c);
    }
}
