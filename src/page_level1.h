#pragma once

#include "page_map.h"

class Level1Page: public MapPage
{
public:
Level1Page(BasePage *parent): MapPage(parent, "level1")
    {
	m_map["Level 01"] = "-";
	m_map["Level 02"] = "-";
	m_map["Level 03"] = "-";
	m_map["Level 04"] = "-";
	m_map["Level 05"] = "-";
	m_map["Level 06"] = "-";
	m_map["Level 07"] = "-";
	m_map["Level 08"] = "-";
	m_map["Level 09"] = "-";
	m_map["Level 10"] = "-";
	m_map["Level 11"] = "-";
	m_map["Level 12"] = "-";
	m_map["Level 13"] = "-";
	m_map["Level 14"] = "-";
	m_map["Level 15"] = "-";
	m_map["Level 16"] = "-";
	m_map["Level 17"] = "-";
	m_map["Level 18"] = "-";
	m_map["Level 19"] = "-";
	m_map["Level 20"] = "-";
	m_map["Level 21"] = "-";
	m_map["Level 22"] = "-";
	m_map["Level 23"] = "-";
	m_map["Level 24"] = "-";
	m_map["Level 25"] = "-";
	m_map["Level 26"] = "-";

	initMenu();
    }
};
