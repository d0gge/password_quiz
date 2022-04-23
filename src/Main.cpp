#include "Game.hpp"
#include <iostream>

int main()
{
  auto& game = Game::GetInstance();
  game.Run();
  return 0;
}
