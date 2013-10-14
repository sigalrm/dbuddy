#pragma once

#include "page_map.h"

class PotionsPage: public MapPage
{
public:
PotionsPage(BasePage *parent): MapPage(parent, "potions")
    {
	m_map["black"] = DEFVAL;
	m_map["brilliant blue"] = DEFVAL;
	m_map["brown"] = DEFVAL;
	m_map["bubbly"] = DEFVAL;
	m_map["cloudy"] = DEFVAL;
	m_map["cyan"] = DEFVAL;
	m_map["dark"] = DEFVAL;
	m_map["dark green"] = DEFVAL;
	m_map["effervescent"] = DEFVAL;
	m_map["emerald"] = DEFVAL;
	m_map["fizzy"] = DEFVAL;
	m_map["golden"] = DEFVAL;
	m_map["magenta"] = DEFVAL;
	m_map["milky"] = DEFVAL;
	m_map["murky"] = DEFVAL;
	m_map["orange"] = DEFVAL;
	m_map["pink"] = DEFVAL;
	m_map["puce"] = DEFVAL;
	m_map["purple-red"] = DEFVAL;
	m_map["ruby"] = DEFVAL;
	m_map["sky blue"] = DEFVAL;
	m_map["smoky"] = DEFVAL;
	m_map["swirly"] = DEFVAL;
	m_map["white"] = DEFVAL;
	m_map["yellow"] = DEFVAL;

	initMenu();
    }
};
