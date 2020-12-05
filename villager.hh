#ifndef Villager_HH
#define Villager_HH

#include "Player.hh"

class Villager: public Player
{
    public:
        Villager();
        virtual Role getRole();
        void reset();
};


#endif