#include "PlayerMemento.h"
#include "PlayerState.h"

PlayerMemento::PlayerMemento(PlayerState state) : _state(state)
{
}

PlayerState PlayerMemento::getState()
{
  return this->_state;
}
