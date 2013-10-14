#pragma once

#include "page_map.h"

class SpellbooksPage: public MapPage
{
public:
SpellbooksPage(BasePage *parent): MapPage(parent, "spellbooks")
    {
	m_map["bronze"] = DEFVAL;
	m_map["cloth"] = DEFVAL;
	m_map["copper"] = DEFVAL;
	m_map["cyan"] = DEFVAL;
	m_map["dark blue"] = DEFVAL;
	m_map["dark brown"] = DEFVAL;
	m_map["dark green"] = DEFVAL;
	m_map["dog eared"] = DEFVAL;
	m_map["dull"] = DEFVAL;
	m_map["dusty"] = DEFVAL;
	m_map["glittering"] = DEFVAL;
	m_map["gold"] = DEFVAL;
	m_map["gray"] = DEFVAL;
	m_map["indigo"] = DEFVAL;
	m_map["leather"] = DEFVAL;
	m_map["light blue"] = DEFVAL;
	m_map["light brown"] = DEFVAL;
	m_map["light green"] = DEFVAL;
	m_map["magenta"] = DEFVAL;
	m_map["mottled"] = DEFVAL;
	m_map["orange"] = DEFVAL;
	m_map["parchment"] = DEFVAL;
	m_map["pink"] = DEFVAL;
	m_map["plaid"] = DEFVAL;
	m_map["purple"] = DEFVAL;
	m_map["ragged"] = DEFVAL;
	m_map["red"] = DEFVAL;
	m_map["shining"] = DEFVAL;
	m_map["silver"] = DEFVAL;
	m_map["stained"] = DEFVAL;
	m_map["tan"] = DEFVAL;
	m_map["thick"] = DEFVAL;
	m_map["thin"] = DEFVAL;
	m_map["turquoise"] = DEFVAL;
	m_map["vellum"] = DEFVAL;
	m_map["velvet"] = DEFVAL;
	m_map["violet"] = DEFVAL;
	m_map["white"] = DEFVAL;
	m_map["wrinkled"] = DEFVAL;
	m_map["yellow"] = DEFVAL;

	initMenu();
    }
};
