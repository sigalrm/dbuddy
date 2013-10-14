#pragma once

#include "page_map.h"

class CloaksPage: public MapPage
{
public:
CloaksPage(BasePage *parent): MapPage(parent, "cloaks")
    {
	m_map["opera cloak"] = DEFVAL;
	m_map["ornamental cope"] = DEFVAL;
	m_map["piece of cloth"] = DEFVAL;
	m_map["tattered cape"] = DEFVAL;

	initMenu();
    }
};
