#pragma once

#include "page_map.h"

class WandsPage: public MapPage
{
public:
WandsPage(BasePage *parent): MapPage(parent, "wands")
    {
	m_map["aluminum"] = DEFVAL;
	m_map["balsa"] = DEFVAL;
	m_map["brass"] = DEFVAL;
	m_map["copper"] = DEFVAL;
	m_map["crystal"] = DEFVAL;
	m_map["curved"] = DEFVAL;
	m_map["ebony"] = DEFVAL;
	m_map["forked"] = DEFVAL;
	m_map["glass"] = DEFVAL;
	m_map["hexagonal"] = DEFVAL;
	m_map["iridium"] = DEFVAL;
	m_map["iron"] = DEFVAL;
	m_map["jeweled"] = DEFVAL;
	m_map["long"] = DEFVAL;
	m_map["maple"] = DEFVAL;
	m_map["marble"] = DEFVAL;
	m_map["oak"] = DEFVAL;
	m_map["pine"] = DEFVAL;
	m_map["platinum"] = DEFVAL;
	m_map["runed"] = DEFVAL;
	m_map["short"] = DEFVAL;
	m_map["silver"] = DEFVAL;
	m_map["spiked"] = DEFVAL;
	m_map["steel"] = DEFVAL;
	m_map["tin"] = DEFVAL;
	m_map["uranium"] = DEFVAL;
	m_map["zinc"] = DEFVAL;

	initMenu();
    }
};
