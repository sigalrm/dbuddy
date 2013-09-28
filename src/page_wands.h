#pragma once

#include "page_map.h"

class WandsPage: public MapPage
{
public:
WandsPage(BasePage *parent): MapPage(parent, "wands")
    {
	m_map["aluminum"] = "-";
	m_map["balsa"] = "-";
	m_map["brass"] = "-";
	m_map["copper"] = "-";
	m_map["crystal"] = "-";
	m_map["curved"] = "-";
	m_map["ebony"] = "-";
	m_map["forked"] = "-";
	m_map["glass"] = "-";
	m_map["hexagonal"] = "-";
	m_map["iridium"] = "-";
	m_map["iron"] = "-";
	m_map["jeweled"] = "-";
	m_map["long"] = "-";
	m_map["maple"] = "-";
	m_map["marble"] = "-";
	m_map["oak"] = "-";
	m_map["pine"] = "-";
	m_map["platinum"] = "-";
	m_map["runed"] = "-";
	m_map["short"] = "-";
	m_map["silver"] = "-";
	m_map["spiked"] = "-";
	m_map["steel"] = "-";
	m_map["tin"] = "-";
	m_map["uranium"] = "-";
	m_map["zinc"] = "-";

	initMenu();
    }
};
