#include "main.h"
#include "page_splash.h"
#include "page_main.h"

#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

Storage *s;

static void
finish(int sig)
{
    endwin();

    /* do your non-curses wrapup here */

    exit(0);
}

static void
setup(void)
{
    const char *homedir = getenv("HOME");
    if (homedir == NULL || chdir(homedir) != 0) {
	fprintf(stderr, "Failed to change directory: %m\n");
	exit(1);
    }

    signal(SIGINT, finish);

    initscr();
    keypad(stdscr, TRUE);
    nonl();
    cbreak();
    noecho();
    set_escdelay(25);

    if (has_colors()) {
	use_default_colors();
        start_color();

        init_pair(1, COLOR_RED,     -1);
        init_pair(2, COLOR_GREEN,   -1);
        init_pair(3, COLOR_YELLOW,  -1);
        init_pair(4, COLOR_BLUE,    -1);
        init_pair(5, COLOR_CYAN,    -1);
        init_pair(6, COLOR_MAGENTA, -1);
        init_pair(7, COLOR_WHITE,   -1);
//	attrset(COLOR_PAIR(num % 8));
    }
}

int
main(int argc, char **argv)
{
    setup();

    SplashPage p;
    SplashPage::loop(p);

    if (p.accepted)
    {
	s = new Storage();
	MainPage m;
	s->load();
	MainPage::loop(m);
    }

    finish(0);
    return 0;
}
