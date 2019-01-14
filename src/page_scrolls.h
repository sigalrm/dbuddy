#pragma once

#include "page_map.h"

class ScrollsPage: public MapPage
{
public:
ScrollsPage(BasePage *parent): MapPage(parent, "scrolls")
    {
        m_map["ABRA KA DABRA"] = DEFVAL;
	m_map["ANDOVA BEGARIN"] = DEFVAL;
        m_map["ASHPD SODALG"] = DEFVAL;
	m_map["DAIYEN FOOELS"] = DEFVAL;
	m_map["DUAM XNAHT"] = DEFVAL;
        m_map["EIRIS SAZUN IDISI"] = DEFVAL;
	m_map["ELAM EBOW"] = DEFVAL;
	m_map["ELBIB YLOH"] = DEFVAL;
        m_map["ETAOIN SHRDLU"] = DEFVAL;
        m_map["FNORD"] = DEFVAL;
	m_map["FOOBIE BLETCH"] = DEFVAL;
	m_map["GARVEN DEH"] = DEFVAL;
        m_map["GHOTI"] = DEFVAL;
        m_map["GNIK SISI VLE"] = DEFVAL;
	m_map["HACKEM MUCHE"] = DEFVAL;
        m_map["HAPAX LEGOMENON"] = DEFVAL;
	m_map["JUYED AWK YACC"] = DEFVAL;
	m_map["KERNOD WEL"] = DEFVAL;
	m_map["KIRJE"] = DEFVAL;
        m_map["KO BATE"] = DEFVAL;
	m_map["LEP GEX VEN ZEA"] = DEFVAL;
        m_map["LOREM IPSUM"] = DEFVAL;
        m_map["MAPIRO MAHAMA DIROMAT"] = DEFVAL;
	m_map["NR 9"] = DEFVAL;
        m_map["PHOL ENDE WODAN"] = DEFVAL;
	m_map["PRATYAVAYAH"] = DEFVAL;
	m_map["PRIRUTSENIE"] = DEFVAL;
	m_map["READ ME"] = DEFVAL;
        m_map["STRC PRST SKRZ KRK"] = DEFVAL;
	m_map["TEMOV"] = DEFVAL;
	m_map["THARR"] = DEFVAL;
        m_map["VAS CORP BET MANI"] = DEFVAL;
	m_map["VE FORBRYDERNE"] = DEFVAL;
	m_map["VELOX NEB"] = DEFVAL;
	m_map["VENZAR BORGAVVE"] = DEFVAL;
	m_map["VERR YED HORRE"] = DEFVAL;
	m_map["XIXAXA XOXAXA XUXAXA"] = DEFVAL;
        m_map["XOR OTA"] = DEFVAL;
	m_map["YUM YUM"] = DEFVAL;
	m_map["ZELGO MER"] = DEFVAL;
        m_map["ZLORFIK"] = DEFVAL;

	initMenu();
    }
};
