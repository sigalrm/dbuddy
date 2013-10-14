#pragma once

#include "page_map.h"

class Level1Page: public MapPage
{
public:
Level1Page(BasePage *parent): MapPage(parent, "level1")
    {
	m_map["Level 01"] = DEFVAL;
	m_map["Level 02"] = DEFVAL;
	m_map["Level 03"] = DEFVAL;
	m_map["Level 04"] = DEFVAL;
	m_map["Level 05"] = DEFVAL;
	m_map["Level 06"] = DEFVAL;
	m_map["Level 07"] = DEFVAL;
	m_map["Level 08"] = DEFVAL;
	m_map["Level 09"] = DEFVAL;
	m_map["Level 10"] = DEFVAL;
	m_map["Level 11"] = DEFVAL;
	m_map["Level 12"] = DEFVAL;
	m_map["Level 13"] = DEFVAL;
	m_map["Level 14"] = DEFVAL;
	m_map["Level 15"] = DEFVAL;
	m_map["Level 16"] = DEFVAL;
	m_map["Level 17"] = DEFVAL;
	m_map["Level 18"] = DEFVAL;
	m_map["Level 19"] = DEFVAL;
	m_map["Level 20"] = DEFVAL;
	m_map["Level 21"] = DEFVAL;
	m_map["Level 22"] = DEFVAL;
	m_map["Level 23"] = DEFVAL;
	m_map["Level 24"] = DEFVAL;
	m_map["Level 25"] = DEFVAL;
	m_map["Level 26"] = DEFVAL;

	initMenu();
    }
};
