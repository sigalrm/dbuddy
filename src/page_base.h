#pragma once

#include <string>
#include <map>

class BasePage
{
protected:
    BasePage *m_parent;

    typedef std::map<char,BasePage*> ChildMap;
    ChildMap m_children;

    static BasePage *s_cur;

public:
    BasePage(BasePage *);

    void addChild(char, BasePage*);
    virtual void process(char);
    virtual void enter();

    virtual void reset();

    void redraw();
    void columnTab(const std::string&, int);

    static void change_page(BasePage*);
};
