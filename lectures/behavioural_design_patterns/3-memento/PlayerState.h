#ifndef PLAYER_STATE_H
#define PLAYER_STATE_H

class PlayerState
{
  private:
    friend class Player;
    int _hitPoints;
    int _experiencePoints;
    int _turnsLeft;
};

#endif

