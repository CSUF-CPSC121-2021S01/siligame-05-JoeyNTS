#ifndef OPPONENT_H
#define OPPONENT_H
#include <vector>
#include "cpputils/graphics/image.h"
#include "game_element.h"

class OpponentProjectile : public GameElement {
 public:
  OpponentProjectile() : GameElement(0, 0, 5, 5) {}
  OpponentProjectile(int x, int y) : GameElement(x, y, 5, 5) {}

  void Draw(graphics::Image &screen) override;
  void Move(const graphics::Image &screen) override;

 private:
  void PadPoints(std::vector<int> &points, int pad_x, int pad_y);
};

class Opponent : public GameElement {
 public:
  Opponent() : GameElement() {}
  Opponent(int x, int y) : GameElement(x, y, 50, 50) {}

  void Draw(graphics::Image &screen) override;
  void Move(const graphics::Image &screen) override;
  std::unique_ptr<OpponentProjectile> LaunchProjectile();

 private:
  void PadPoints(std::vector<int> &points, int pad_x, int pad_y);
  int counter = 0;
};
#endif
