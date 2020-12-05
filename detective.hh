#ifndef Detective_H
#define Detective_H
#include "villager.hh"

class Detective : public Villager
{
    public:
    Detective();
    virtual Player::Role getRole();
    bool isAlreadyAsked();
    void setAsked();
    void reset();

    private:
    bool askedOnce;
};

#endif
