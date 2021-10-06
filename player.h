#ifndef PLAYER_H
#define PLAYER_H
#include <vector>
#include "cpputils/graphics/image.h"
#include "game_element.h"
#include "opponent.h"

class PlayerProjectile : public GameElement {
 public:
  PlayerProjectile() : GameElement(0, 0, 10, 10) {}
  PlayerProjectile(int x, int y) : GameElement(x, y, 10, 10) {}

  void Draw(graphics::Image &screen) override;
  void Move(const graphics::Image &screen) override;

 private:
  void PadPoints(std::vector<int> &points, int pad_x, int pad_y);
};

class Player : public GameElement {
 public:
  Player() : GameElement() {}
  Player(int x, int y) : GameElement(x, y, 50, 50) {}

  void Draw(graphics::Image &screen) override;
  void Move(const graphics::Image &screen) override {}

 private:
  void PadPoints(std::vector<int> &points, int pad_x, int pad_y);
};
#endif
