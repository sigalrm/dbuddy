#include "main.h"
#include "page_main.h"
#include "page_level1.h"
#include "page_level2.h"
#include "page_intrinsics.h"
#include "page_amulets.h"
#include "page_boots.h"
#include "page_cloaks.h"
#include "page_gloves.h"
#include "page_helmets.h"
#include "page_potions.h"
#include "page_rings.h"
#include "page_scrolls.h"
#include "page_spellbooks.h"
#include "page_wands.h"
#include <string.h>
#include <stdlib.h>

MainPage::MainPage(): BasePage(NULL)
{
    alive = true;

    // add pages
    addChild('l', new Level1Page(this));
    addChild('n', new Level2Page(this));
    addChild('i', new IntrinsicsPage(this));

    addChild('a', new AmuletsPage(this));
    addChild('b', new BootsPage(this));
    addChild('c', new CloaksPage(this));
    addChild('g', new GlovesPage(this));
    addChild('h', new HelmetsPage(this));
    addChild('p', new PotionsPage(this));
    addChild('r', new RingsPage(this));
    addChild('s', new ScrollsPage(this));
    addChild('t', new SpellbooksPage(this));
    addChild('w', new WandsPage(this));

    // add values
    s->put("prayed", "val", DEFVAL);
}

void
MainPage::setPrayed()
{
    int x, y;
    char buf[16] = {0};

    getmaxyx(stdscr, y, x);
    move(y - 1, 0);
    addstr("Last prayed at: ");

    echo();
    wgetnstr(stdscr, buf, sizeof(buf) - 1);
    noecho();

    if (*buf) {
	s->put("prayed", "val", buf);
	s->save();
    }

    redraw();
}

void
MainPage::enter()
{
    int prayed = atoi(s->get("prayed", "val").c_str());
    char buf[512];

    snprintf(buf, sizeof(buf),
	     "\n"
	     "\t" PACKAGE_STRING "\n"
	     "\n"
	     "\tl - Level Notes (01-26)\n"
	     "\tn - Level Notes (27-52)\n"
	     "\ti - Intrinsics\n"
	     "\ty - Last Prayed - %d\n"
	     "\n"
	     "\ta - Amulets\n"
	     "\tb - Boots\n"
	     "\tc - Cloaks\n"
	     "\tg - Gloves\n"
	     "\th - Helmets\n"
	     "\tp - Potions\n"
	     "\tr - Rings\n"
	     "\ts - Scrolls\n"
	     "\tt - Spellbooks\n"
	     "\tw - Wands\n"
	     "\n"
	     "\t@ - Reset Database\n"
	     "\tq - Quit\n",
	     prayed);

    addstr(buf);
}

void
MainPage::process(char c)
{
    switch (c) {
    case 'q':
    case 27:
	alive = false;
	break;
    case 'y':
	setPrayed();
	break;
    case '@':
	reset();
	break;
    default:
	BasePage::process(c);
	break;
    }
}

void
MainPage::reset()
{
    int x, y;
    char buf[16] = {0};

    getmaxyx(stdscr, y, x);
    move(y - 1, 0);
    addstr("Enter 'yes' to confirm database reset: ");

    echo();
    wgetnstr(stdscr, buf, sizeof(buf) - 1);
    noecho();

    if (strcmp(buf, "yes") == 0)
    {
	s->reset();
    }

    redraw();
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
