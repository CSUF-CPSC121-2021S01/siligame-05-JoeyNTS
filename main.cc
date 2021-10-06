#include <iostream>
#include <vector>
#include "cpputils/graphics/image.h"
#include "game.h"
int main() {
  Game game;
  game.Init();
  game.Start(game.GetGameScreen());

  return 0;
}
