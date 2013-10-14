#pragma once

#include "page_map.h"

class Level2Page: public MapPage
{
public:
Level2Page(BasePage *parent): MapPage(parent, "level2")
    {
	m_map["Level 27"] = DEFVAL;
	m_map["Level 28"] = DEFVAL;
	m_map["Level 29"] = DEFVAL;
	m_map["Level 30"] = DEFVAL;
	m_map["Level 31"] = DEFVAL;
	m_map["Level 32"] = DEFVAL;
	m_map["Level 33"] = DEFVAL;
	m_map["Level 34"] = DEFVAL;
	m_map["Level 35"] = DEFVAL;
	m_map["Level 36"] = DEFVAL;
	m_map["Level 37"] = DEFVAL;
	m_map["Level 38"] = DEFVAL;
	m_map["Level 39"] = DEFVAL;
	m_map["Level 40"] = DEFVAL;
	m_map["Level 41"] = DEFVAL;
	m_map["Level 42"] = DEFVAL;
	m_map["Level 43"] = DEFVAL;
	m_map["Level 44"] = DEFVAL;
	m_map["Level 45"] = DEFVAL;
	m_map["Level 46"] = DEFVAL;
	m_map["Level 47"] = DEFVAL;
	m_map["Level 48"] = DEFVAL;
	m_map["Level 49"] = DEFVAL;
	m_map["Level 50"] = DEFVAL;
	m_map["Level 51"] = DEFVAL;
	m_map["Level 52"] = DEFVAL;

	initMenu();
    }
};
