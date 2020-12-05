#include "joker.hh"

Joker::Joker()
    :Player(){}

Player::Role Joker::getRole(){ return Player::JOKER;}

void Joker::reset()
{
    Player::reset();
}