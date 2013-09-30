#include "page_base.h"

class SplashPage: public BasePage
{
public:
    SplashPage();
    void enter();

    bool accepted;
    static void loop(SplashPage&);
};
