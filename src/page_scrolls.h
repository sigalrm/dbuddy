#pragma once

#include "page_map.h"

class ScrollsPage: public MapPage
{
public:
ScrollsPage(BasePage *parent): MapPage(parent, "scrolls")
    {
	m_map["ANDOVA BEGARIN"] = "-";
	m_map["DAIYEN FOOELS"] = "-";
	m_map["DUAM XNAHT"] = "-";
	m_map["ELAM EBOW"] = "-";
	m_map["ELBIB YLOH"] = "-";
	m_map["FOOBIE BLETCH"] = "-";
	m_map["GARVEN DEH"] = "-";
	m_map["HACKEM MUCHE"] = "-";
	m_map["JUYED AWK YACC"] = "-";
	m_map["KERNOD WEL"] = "-";
	m_map["KIRJE"] = "-";
	m_map["LEP GEX VEN ZEA"] = "-";
	m_map["NR 9"] = "-";
	m_map["PRATYAVAYAH"] = "-";
	m_map["PRIRUTSENIE"] = "-";
	m_map["READ ME"] = "-";
	m_map["TEMOV"] = "-";
	m_map["THARR"] = "-";
	m_map["VE FORBRYDERNE"] = "-";
	m_map["VELOX NEB"] = "-";
	m_map["VENZAR BORGAVVE"] = "-";
	m_map["VERR YED HORRE"] = "-";
	m_map["XIXAXA XOXAXA XUXAXA"] = "-";
	m_map["YUM YUM"] = "-";
	m_map["ZELGO MER"] = "-";

	initMenu();
    }
};
