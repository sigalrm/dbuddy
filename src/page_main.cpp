#include "main.h"
#include "page_main.h"
#include "page_amulets.h"
#include "page_boots.h"
#include "page_cloaks.h"
#include "page_gloves.h"
#include "page_helmets.h"
#include "page_potions.h"
#include "page_rings.h"
#include "page_scrolls.h"
#include "page_wands.h"

MainPage::MainPage(): BasePage(NULL)
{
    alive = true;

    // add pages
    addChild('a', new AmuletsPage(this));
    addChild('b', new BootsPage(this));
    addChild('c', new CloaksPage(this));
    addChild('g', new GlovesPage(this));
    addChild('h', new HelmetsPage(this));
    addChild('p', new PotionsPage(this));
    addChild('r', new RingsPage(this));
    addChild('s', new ScrollsPage(this));
    addChild('w', new WandsPage(this));
}

void
MainPage::enter()
{
    addstr("\n"
	   "\ta - Amulets\n"
	   "\tb - Boots\n"
	   "\tc - Cloaks\n"
	   "\tg - Gloves\n"
	   "\th - Helmets\n"
	   "\tp - Potions\n"
	   "\tr - Rings\n"
	   "\ts - Scrolls\n"
	   "\tw - Wands\n"
	   "\n"
	   "\tq - Quit\n");
}

void
MainPage::process(char c)
{
    switch (c) {
    case 'q':
    case 27:
	alive = false;
	break;
    default:
	BasePage::process(c);
	break;
    }
}

void
MainPage::loop(MainPage &m)
{
    MainPage::change_page(&m);

    while (m.alive)
    {
        int c = getch();     /* refresh, accept single keystroke of input */

	s_cur->process(c);
	refresh();
    }
}
