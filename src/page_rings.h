#pragma once

#include "page_map.h"

class RingsPage: public MapPage
{
public:
RingsPage(BasePage *parent): MapPage(parent, "rings")
    {
	m_map["agate"] = DEFVAL;
	m_map["black onyx"] = DEFVAL;
	m_map["brass"] = DEFVAL;
	m_map["bronze"] = DEFVAL;
	m_map["clay"] = DEFVAL;
	m_map["copper"] = DEFVAL;
	m_map["coral"] = DEFVAL;
	m_map["diamond"] = DEFVAL;
	m_map["emerald"] = DEFVAL;
	m_map["engagement"] = DEFVAL;
	m_map["gold"] = DEFVAL;
	m_map["granite"] = DEFVAL;
	m_map["iron"] = DEFVAL;
	m_map["ivory"] = DEFVAL;
	m_map["jade"] = DEFVAL;
	m_map["moonstone"] = DEFVAL;
	m_map["opal"] = DEFVAL;
	m_map["pearl"] = DEFVAL;
	m_map["ruby"] = DEFVAL;
	m_map["sapphire"] = DEFVAL;
	m_map["shiny"] = DEFVAL;
	m_map["silver"] = DEFVAL;
	m_map["steel"] = DEFVAL;
	m_map["tiger eye"] = DEFVAL;
	m_map["topaz"] = DEFVAL;
	m_map["twisted"] = DEFVAL;
	m_map["wire"] = DEFVAL;
	m_map["wooden"] = DEFVAL;

	initMenu();
    }
};
