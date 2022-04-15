#pragma once

#include <iostream>
#include <functional>

enum class EState
{
  Walk = 0,
  Fly
};

class Character
{
  public:
    Character();

    void moveTo();
    void switchState(EState newState);

private:
  std::function<void()> moveFunc;
};


namespace CharacterUtils
{
  inline void fly()
  {
    std::cout << "flying" << std::endl;
  }

  inline void walk()
  {
    std::cout << "walking" << std::endl;
  }
}