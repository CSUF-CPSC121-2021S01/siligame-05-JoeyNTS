#include "game_element.h"
#include "cpputils/graphics/image.h"

bool GameElement::IntersectsWith(GameElement *game) {
  return !(GetX() > game->GetX() + game->GetWidth() ||
           game->GetX() > GetX() + GetWidth() ||
           GetY() > game->GetY() + game->GetHeight() ||
           game->GetY() > GetY() + GetHeight());
}

bool GameElement::IsOutOfBounds(graphics::Image &screen) {
  if (GetX() + GetWidth() >= screen.GetWidth() || GetX() < 0) {
    return true;
  }

  if (GetY() + GetHeight() >= screen.GetHeight() || GetY() < 0) {
    return true;
  }

  return false;
}
