#pragma once

#include "page_map.h"

class IntrinsicsPage: public MapPage
{
public:
IntrinsicsPage(BasePage *parent): MapPage(parent, "intrinsics")
    {
	m_map["aggravate monster"] = "-";
	m_map["cold resistance"] = "-";
	m_map["conflict"] = "-";
	m_map["disintegration resistance"] = "-";
	m_map["divine protection"] = "-";
	m_map["fire resistance"] = "-";
	m_map["food appraisal"] = "-";
	m_map["infravision"] = "-";
	m_map["invisibility"] = "-";
	m_map["jumping"] = "-";
	m_map["levitation"] = "-";
	m_map["magical breathing"] = "-";
	m_map["poison resistance"] = "-";
	m_map["polymorph control"] = "-";
	m_map["polymorphitis"] = "-";
	m_map["protection from shape changers"] = "-";
	m_map["regeneration"] = "-";
	m_map["searching"] = "-";
	m_map["see invisible"] = "-";
	m_map["shock resistance"] = "-";
	m_map["sleep resistance"] = "-";
	m_map["speed"] = "-";
	m_map["stealth"] = "-";
	m_map["telepathy"] = "-";
	m_map["teleport control"] = "-";
	m_map["teleportitis"] = "-";
	m_map["warning"] = "-";
	m_map["water breathing"] = "-";

	initMenu();
    }
};
