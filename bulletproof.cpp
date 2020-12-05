#include "bulletproof.hh"

BulletProof::BulletProof()
    :Villager()
{
    onceDied = false;
}

void BulletProof::reset()
{
    Player::reset();
}

bool BulletProof::isAlreadyDied(){ return onceDied;}

void BulletProof::setOnceDead()
{
    onceDied = true;
}

Player::Role BulletProof::getRole(){ return Player::BULLETPROOF; }