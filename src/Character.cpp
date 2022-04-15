#include "Character.h"

Character::Character()
: moveFunc(CharacterUtils::walk)
{

}

void Character::moveTo()
{
  moveFunc();
}

void Character::switchState(EState newState)
{
  switch (newState)
  {
    case EState::Walk:
      moveFunc = CharacterUtils::walk;
      break;
    case EState::Fly:
      moveFunc = CharacterUtils::fly;
      break;
    default:
      break;
  }
}