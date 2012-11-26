#ifndef PLAYER_H
#define PLAYER_H

class PlayerMemento;
#include "PlayerState.h"

class Player
{
  public:
    Player();
    PlayerMemento* createMemento();
    void setMemento(PlayerMemento*);
    int hitPoints();
    int experiencePoints();
    int turnsLeft();
    void attack();

  private:
    PlayerState _state;
};

#endif
