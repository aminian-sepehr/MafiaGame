#ifndef Joker_H
#define Joker_H
#include "Player.hh"

class Joker : public Player
{
    public:
    Joker();
    virtual Role getRole();
    void reset();
};

#endif
