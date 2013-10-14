#pragma once

#include "page_map.h"

class HelmetsPage: public MapPage
{
public:
HelmetsPage(BasePage *parent): MapPage(parent, "helmets")
    {
	m_map["crested"] = DEFVAL;
	m_map["etched"] = DEFVAL;
	m_map["plumed"] = DEFVAL;
	m_map["visored"] = DEFVAL;

	initMenu();
    }
};
