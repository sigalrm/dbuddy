#include "page_base.h"

class MainPage: public BasePage
{
public:
    MainPage();
    void enter();
    void process(char);

    void reset();

    bool alive;
    static void loop(MainPage&);
};
