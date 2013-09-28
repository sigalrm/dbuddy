#pragma once

#include "page_base.h"
#include "storage.h"

class MapPage: public BasePage
{
private:
    typedef std::map<char,std::string,bool(*)(char,char)> MenuMap;
    MenuMap m_menu;

    unsigned int m_width;

protected:
    StringMap &m_map;

    void initMenu();

public:
    MapPage(BasePage*, StorageKey type);

    void enter();
    void process(char);
};
