#pragma once

#include "page_map.h"

class AmuletsPage: public MapPage
{
public:
AmuletsPage(BasePage *parent): MapPage(parent, "amulets")
    {
	m_map["circular"] = DEFVAL;
	m_map["concave"] = DEFVAL;
	m_map["hexagonal"] = DEFVAL;
	m_map["octagonal"] = DEFVAL;
	m_map["oval"] = DEFVAL;
	m_map["pyramidal"] = DEFVAL;
	m_map["spherical"] = DEFVAL;
	m_map["square"] = DEFVAL;
	m_map["triangular"] = DEFVAL;

	initMenu();
    }
};
