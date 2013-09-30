#include "main.h"
#include "page_splash.h"

SplashPage::SplashPage(): BasePage(NULL), accepted(false)
{
}

void
SplashPage::enter()
{
    addstr("\n\n\n");
    columnCenter("STOP.");
    addstr("\n\n");
    columnCenter("This program is a game SPOILER.");
    addstr("\n\n");
    columnCenter("If you wish to remain unspoiled, press Escape to exit.");
    addstr("\n\n");
    columnCenter("Otherwise, press y to continue.");
}

void
SplashPage::loop(SplashPage &p)
{
    SplashPage::change_page(&p);

    int c = getch();

    if (c == 'y' || c == 'Y')
	p.accepted = true;
}
