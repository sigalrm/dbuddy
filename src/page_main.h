#include "page_base.h"

class MainPage: public BasePage
{
public:
    MainPage();
    void enter();
    void process(char);

    bool alive;
    static void loop(MainPage&);
};
