#include "main.h"
#include "page_base.h"

BasePage *BasePage::s_cur;

BasePage::BasePage(BasePage *parent)
{
    m_parent = parent;
}
    
void
BasePage::addChild(char key, BasePage *val)
{
    m_children[key] = val;
}

void
BasePage::process(char c)
{
    if (c == 27) {
	change_page(m_parent);
    }
    else if (m_children.count(c)) {
	change_page(m_children[c]);
    }
}

void
BasePage::enter()
{
}

void
BasePage::change_page(BasePage *page)
{
    s_cur = page;

    wclear(stdscr);
    s_cur->enter();
    refresh();
}

void
BasePage::redraw()
{
    change_page(this);
}

void
BasePage::columnTab(const std::string &str, int maxwidth)
{
    for (int i = str.length(); i < maxwidth; ++i) {
	waddch(stdscr, ' ');
    }

    waddch(stdscr, '\t');
}
