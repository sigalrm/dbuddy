#pragma once

#include "page_map.h"

class BootsPage: public MapPage
{
public:
BootsPage(BasePage *parent): MapPage(parent, "boots")
    {
	m_map["buckled"] = "-";
	m_map["combat"] = "-";
	m_map["hiking"] = "-";
	m_map["jungle"] = "-";
	m_map["mud"] = "-";
	m_map["riding"] = "-";
	m_map["snow"] = "-";

	initMenu();
    }
};
