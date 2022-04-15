#include <iostream>
#include <string>

#include "src\Character.h"

int main()
{
    Character character;

    character.moveTo();

    character.switchState(EState::Fly);

    character.moveTo();
}