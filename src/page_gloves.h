#pragma once

#include "page_map.h"

class GlovesPage: public MapPage
{
public:
GlovesPage(BasePage *parent): MapPage(parent, "gloves")
    {
	m_map["fencing"] = "-";
	m_map["old"] = "-";
	m_map["padded"] = "-";
	m_map["riding"] = "-";

	initMenu();
    }
};
