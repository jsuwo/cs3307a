#ifndef PLAYER_MEMENTO_H
#define PLAYER_MEMENTO_H

#include "PlayerState.h"

class PlayerMemento
{
  public:
    PlayerMemento(PlayerState state);
    PlayerState getState();

  private:
    PlayerState _state;
};

#endif
