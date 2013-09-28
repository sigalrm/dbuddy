#pragma once

#include "page_map.h"

class Level2Page: public MapPage
{
public:
Level2Page(BasePage *parent): MapPage(parent, "level2")
    {
	m_map["Level 27"] = "-";
	m_map["Level 28"] = "-";
	m_map["Level 29"] = "-";
	m_map["Level 30"] = "-";
	m_map["Level 31"] = "-";
	m_map["Level 32"] = "-";
	m_map["Level 33"] = "-";
	m_map["Level 34"] = "-";
	m_map["Level 35"] = "-";
	m_map["Level 36"] = "-";
	m_map["Level 37"] = "-";
	m_map["Level 38"] = "-";
	m_map["Level 39"] = "-";
	m_map["Level 40"] = "-";
	m_map["Level 41"] = "-";
	m_map["Level 42"] = "-";
	m_map["Level 43"] = "-";
	m_map["Level 44"] = "-";
	m_map["Level 45"] = "-";
	m_map["Level 46"] = "-";
	m_map["Level 47"] = "-";
	m_map["Level 48"] = "-";
	m_map["Level 49"] = "-";
	m_map["Level 50"] = "-";
	m_map["Level 51"] = "-";
	m_map["Level 52"] = "-";

	initMenu();
    }
};
