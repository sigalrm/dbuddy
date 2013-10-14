#pragma once

#include "page_map.h"

class IntrinsicsPage: public MapPage
{
public:
IntrinsicsPage(BasePage *parent): MapPage(parent, "intrinsics")
    {
	m_map["aggravate monster"] = DEFVAL;
	m_map["cold resistance"] = DEFVAL;
	m_map["conflict"] = DEFVAL;
	m_map["disintegration resistance"] = DEFVAL;
	m_map["divine protection"] = DEFVAL;
	m_map["fire resistance"] = DEFVAL;
	m_map["food appraisal"] = DEFVAL;
	m_map["infravision"] = DEFVAL;
	m_map["invisibility"] = DEFVAL;
	m_map["jumping"] = DEFVAL;
	m_map["levitation"] = DEFVAL;
	m_map["magical breathing"] = DEFVAL;
	m_map["poison resistance"] = DEFVAL;
	m_map["polymorph control"] = DEFVAL;
	m_map["polymorphitis"] = DEFVAL;
	m_map["protection from shape changers"] = DEFVAL;
	m_map["regeneration"] = DEFVAL;
	m_map["searching"] = DEFVAL;
	m_map["see invisible"] = DEFVAL;
	m_map["shock resistance"] = DEFVAL;
	m_map["sleep resistance"] = DEFVAL;
	m_map["speed"] = DEFVAL;
	m_map["stealth"] = DEFVAL;
	m_map["telepathy"] = DEFVAL;
	m_map["teleport control"] = DEFVAL;
	m_map["teleportitis"] = DEFVAL;
	m_map["warning"] = DEFVAL;
	m_map["water breathing"] = DEFVAL;

	initMenu();
    }
};
