#pragma once

#include "page_map.h"

class BootsPage: public MapPage
{
public:
BootsPage(BasePage *parent): MapPage(parent, "boots")
    {
	m_map["buckled"] = DEFVAL;
	m_map["combat"] = DEFVAL;
	m_map["hiking"] = DEFVAL;
	m_map["jungle"] = DEFVAL;
	m_map["mud"] = DEFVAL;
	m_map["riding"] = DEFVAL;
	m_map["snow"] = DEFVAL;

	initMenu();
    }
};
