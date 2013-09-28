#pragma once

#include "page_map.h"

class SpellbooksPage: public MapPage
{
public:
SpellbooksPage(BasePage *parent): MapPage(parent, "spellbooks")
    {
	m_map["bronze"] = "-";
	m_map["cloth"] = "-";
	m_map["copper"] = "-";
	m_map["cyan"] = "-";
	m_map["dark blue"] = "-";
	m_map["dark brown"] = "-";
	m_map["dark green"] = "-";
	m_map["dog eared"] = "-";
	m_map["dull"] = "-";
	m_map["dusty"] = "-";
	m_map["glittering"] = "-";
	m_map["gold"] = "-";
	m_map["gray"] = "-";
	m_map["indigo"] = "-";
	m_map["leather"] = "-";
	m_map["light blue"] = "-";
	m_map["light brown"] = "-";
	m_map["light green"] = "-";
	m_map["magenta"] = "-";
	m_map["mottled"] = "-";
	m_map["orange"] = "-";
	m_map["parchment"] = "-";
	m_map["pink"] = "-";
	m_map["plaid"] = "-";
	m_map["purple"] = "-";
	m_map["ragged"] = "-";
	m_map["red"] = "-";
	m_map["shining"] = "-";
	m_map["silver"] = "-";
	m_map["stained"] = "-";
	m_map["tan"] = "-";
	m_map["thick"] = "-";
	m_map["thin"] = "-";
	m_map["turquoise"] = "-";
	m_map["vellum"] = "-";
	m_map["velvet"] = "-";
	m_map["violet"] = "-";
	m_map["white"] = "-";
	m_map["wrinkled"] = "-";
	m_map["yellow"] = "-";

	initMenu();
    }
};
