#pragma once

#include "page_map.h"

class CloaksPage: public MapPage
{
public:
CloaksPage(BasePage *parent): MapPage(parent, "cloaks")
    {
	m_map["opera cloak"] = "-";
	m_map["ornamental cope"] = "-";
	m_map["piece of cloth"] = "-";
	m_map["tattered cape"] = "-";

	initMenu();
    }
};
