#include <cstdlib>
#include <ctime>
#include "Player.h"
#include "PlayerMemento.h"
#include "PlayerState.h"

Player::Player()
{
  this->_state._hitPoints = 100;
  this->_state._experiencePoints = 0;
  this->_state._turnsLeft = 50;

  // Seed the pseudo-random number generator
  srand(time(NULL));
}

PlayerMemento* Player::createMemento()
{
  return new PlayerMemento(this->_state);
}

void Player::setMemento(PlayerMemento* memento)
{
  this->_state = memento->getState();
}

int Player::hitPoints()
{
  return this->_state._hitPoints;
}

int Player::experiencePoints()
{
  return this->_state._experiencePoints;
}

int Player::turnsLeft()
{
  return this->_state._turnsLeft;
}

void Player::attack()
{
  this->_state._hitPoints -= (rand() % 10);
  this->_state._experiencePoints += (rand() % 100);
  this->_state._turnsLeft--;
}

