#pragma once

#include "page_map.h"

class RingsPage: public MapPage
{
public:
RingsPage(BasePage *parent): MapPage(parent, "rings")
    {
	m_map["agate"] = "-";
	m_map["black onyx"] = "-";
	m_map["brass"] = "-";
	m_map["bronze"] = "-";
	m_map["clay"] = "-";
	m_map["copper"] = "-";
	m_map["coral"] = "-";
	m_map["diamond"] = "-";
	m_map["emerald"] = "-";
	m_map["engagement"] = "-";
	m_map["gold"] = "-";
	m_map["granite"] = "-";
	m_map["iron"] = "-";
	m_map["ivory"] = "-";
	m_map["jade"] = "-";
	m_map["moonstone"] = "-";
	m_map["opal"] = "-";
	m_map["pearl"] = "-";
	m_map["ruby"] = "-";
	m_map["sapphire"] = "-";
	m_map["shiny"] = "-";
	m_map["silver"] = "-";
	m_map["steel"] = "-";
	m_map["tiger eye"] = "-";
	m_map["topaz"] = "-";
	m_map["twisted"] = "-";
	m_map["wire"] = "-";
	m_map["wooden"] = "-";

	initMenu();
    }
};
