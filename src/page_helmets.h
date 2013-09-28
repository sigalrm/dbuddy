#pragma once

#include "page_map.h"

class HelmetsPage: public MapPage
{
public:
HelmetsPage(BasePage *parent): MapPage(parent, "helmets")
    {
	m_map["crested"] = "-";
	m_map["etched"] = "-";
	m_map["plumed"] = "-";
	m_map["visored"] = "-";

	initMenu();
    }
};
