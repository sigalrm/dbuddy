#pragma once

#include "page_map.h"

class GlovesPage: public MapPage
{
public:
GlovesPage(BasePage *parent): MapPage(parent, "gloves")
    {
	m_map["fencing"] = DEFVAL;
	m_map["old"] = DEFVAL;
	m_map["padded"] = DEFVAL;
	m_map["riding"] = DEFVAL;

	initMenu();
    }
};
