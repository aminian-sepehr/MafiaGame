#ifndef bulletproof_H
#define bulletproof_H
#include "villager.hh"

class BulletProof : public Villager
{
    public:
    BulletProof();
    virtual Player::Role getRole();
    bool isAlreadyDied();
    void setOnceDead();
    void reset();

    private:
    bool onceDied;
};

#endif
