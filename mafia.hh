
#ifndef Mafia_H
#define Mafia_H
#include "Player.hh"

class Mafia : public Player
{
    public:
    Mafia();
    virtual Role getRole();
    void reset();
};

#endif

