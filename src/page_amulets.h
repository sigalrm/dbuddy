#pragma once

#include "page_map.h"

class AmuletsPage: public MapPage
{
public:
AmuletsPage(BasePage *parent): MapPage(parent, "amulets")
    {
	m_map["circular"] = "-";
	m_map["concave"] = "-";
	m_map["hexagonal"] = "-";
	m_map["octagonal"] = "-";
	m_map["oval"] = "-";
	m_map["pyramidal"] = "-";
	m_map["spherical"] = "-";
	m_map["square"] = "-";
	m_map["triangular"] = "-";

	initMenu();
    }
};
