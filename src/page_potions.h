#pragma once

#include "page_map.h"

class PotionsPage: public MapPage
{
public:
PotionsPage(BasePage *parent): MapPage(parent, "potions")
    {
	m_map["black"] = "-";
	m_map["brilliant blue"] = "-";
	m_map["brown"] = "-";
	m_map["bubbly"] = "-";
	m_map["cloudy"] = "-";
	m_map["cyan"] = "-";
	m_map["dark"] = "-";
	m_map["dark green"] = "-";
	m_map["effervescent"] = "-";
	m_map["emerald"] = "-";
	m_map["fizzy"] = "-";
	m_map["golden"] = "-";
	m_map["magenta"] = "-";
	m_map["milky"] = "-";
	m_map["murky"] = "-";
	m_map["orange"] = "-";
	m_map["pink"] = "-";
	m_map["puce"] = "-";
	m_map["purple-red"] = "-";
	m_map["ruby"] = "-";
	m_map["sky blue"] = "-";
	m_map["smoky"] = "-";
	m_map["swirly"] = "-";
	m_map["white"] = "-";
	m_map["yellow"] = "-";

	initMenu();
    }
};
