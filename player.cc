#include "player.h"
#include <vector>
#include "cpputils/graphics/image.h"

void PlayerProjectile::PadPoints(std::vector<int> &points, int pad_x,
                                 int pad_y) {
  for (int i = 0; i < points.size(); i++) {
    if (i % 2 == 0) {
      points[i] += pad_x;
    } else {
      points[i] += pad_y;
    }
  }
}

void Player::PadPoints(std::vector<int> &points, int pad_x, int pad_y) {
  for (int i = 0; i < points.size(); i++) {
    if (i % 2 == 0) {
      points[i] += pad_x;
    } else {
      points[i] += pad_y;
    }
  }
}

void DrawPlayer() {
  graphics::Image player(50, 50);
  graphics::Color Oilblack(34, 32, 32);
  graphics::Color darkred(141, 2, 2);
  graphics::Color darkredshade(161, 6, 6);
  graphics::Color darkblue(6, 111, 169);
  graphics::Color darkblueshade(9, 99, 148);
  graphics::Color lightgray(226, 233, 236);
  graphics::Color gray(204, 207, 208);
  graphics::Color skin(236, 188, 180);
  graphics::Color brown(43, 30, 8);

  player.DrawRectangle(0, 0, 50, 50, graphics::Color(63, 192, 199));
  player.DrawLine(22, 2, 29, 2, Oilblack);
  player.DrawLine(20, 3, 31, 3, Oilblack);
  player.DrawLine(19, 4, 32, 4, Oilblack);
  player.DrawLine(18, 5, 33, 5, Oilblack);
  player.DrawLine(18, 6, 33, 6, Oilblack);
  player.DrawLine(17, 7, 34, 7, Oilblack);
  player.DrawLine(17, 8, 34, 8, Oilblack);
  player.DrawLine(17, 9, 34, 9, Oilblack);
  player.DrawLine(14, 10, 19, 10, darkred);
  player.DrawLine(20, 10, 31, 10, Oilblack);
  player.DrawLine(32, 10, 37, 10, darkred);
  player.SetColor(14, 11, darkred);
  player.SetColor(15, 11, darkredshade);
  player.DrawLine(16, 11, 19, 11, darkred);
  player.DrawLine(20, 11, 31, 11, Oilblack);
  player.DrawLine(32, 11, 35, 11, darkred);
  player.SetColor(36, 11, darkredshade);
  player.SetColor(37, 11, darkred);
  player.DrawLine(14, 12, 17, 12, darkredshade);
  player.DrawLine(18, 12, 20, 12, darkred);
  player.DrawLine(21, 12, 30, 12, Oilblack);
  player.DrawLine(31, 12, 32, 12, darkred);
  player.DrawLine(33, 12, 37, 12, darkredshade);
  player.DrawLine(14, 13, 15, 13, darkred);
  player.DrawLine(16, 13, 18, 13, darkredshade);
  player.DrawLine(19, 13, 22, 13, darkred);
  player.DrawLine(23, 13, 28, 13, Oilblack);
  player.DrawLine(29, 13, 32, 13, darkred);
  player.DrawLine(33, 13, 35, 13, darkredshade);
  player.DrawLine(36, 13, 37, 13, darkred);
  player.SetColor(16, 14, darkred);
  player.DrawLine(17, 14, 21, 14, darkredshade);
  player.DrawLine(22, 14, 23, 14, darkred);
  player.SetColor(24, 14, Oilblack);
  player.SetColor(25, 14, darkred);
  player.SetColor(26, 14, darkredshade);
  player.SetColor(27, 14, Oilblack);
  player.DrawLine(28, 14, 29, 14, darkred);
  player.DrawLine(30, 14, 34, 14, darkredshade);
  player.SetColor(35, 14, darkred);
  player.SetColor(16, 15, darkred);
  player.DrawLine(17, 15, 22, 15, darkredshade);
  player.DrawLine(23, 15, 24, 15, darkred);
  player.DrawLine(25, 15, 26, 15, darkredshade);
  player.DrawLine(27, 15, 28, 15, darkred);
  player.DrawLine(29, 15, 34, 15, darkredshade);
  player.SetColor(35, 15, darkred);
  player.DrawLine(16, 16, 22, 16, darkredshade);
  player.DrawLine(23, 16, 24, 16, darkred);
  player.SetColor(25, 16, darkredshade);
  player.DrawLine(26, 16, 28, 16, darkred);
  player.DrawLine(29, 16, 35, 16, darkredshade);
  player.SetColor(17, 17, darkred);
  player.DrawLine(18, 17, 20, 17, darkredshade);
  player.DrawLine(21, 17, 24, 17, darkred);
  player.DrawLine(25, 17, 26, 17, Oilblack);
  player.SetColor(27, 17, darkredshade);
  player.DrawLine(28, 17, 29, 17, darkred);
  player.DrawLine(30, 17, 34, 17, darkredshade);
  player.DrawLine(16, 18, 17, 18, darkred);
  player.DrawLine(18, 18, 19, 18, darkredshade);
  player.DrawLine(20, 18, 22, 18, darkred);
  player.DrawLine(23, 18, 24, 18, darkredshade);
  player.DrawLine(25, 18, 26, 18, Oilblack);
  player.DrawLine(27, 18, 28, 18, darkredshade);
  player.DrawLine(29, 18, 30, 18, darkred);
  player.DrawLine(31, 18, 33, 18, darkredshade);
  player.DrawLine(34, 18, 35, 18, darkred);
  player.SetColor(15, 19, darkred);
  player.DrawLine(16, 19, 17, 19, darkredshade);
  player.DrawLine(18, 19, 20, 19, darkred);
  player.DrawLine(21, 19, 24, 19, darkredshade);
  player.DrawLine(25, 19, 26, 19, Oilblack);
  player.DrawLine(27, 19, 30, 19, darkredshade);
  player.DrawLine(31, 19, 33, 19, darkred);
  player.DrawLine(34, 19, 35, 19, darkredshade);
  player.SetColor(36, 19, darkred);
  player.DrawLine(16, 20, 24, 20, darkredshade);
  player.DrawLine(25, 20, 26, 20, Oilblack);
  player.DrawLine(27, 20, 35, 20, darkredshade);
  player.DrawLine(17, 21, 18, 21, darkred);
  player.DrawLine(19, 21, 24, 21, darkredshade);
  player.DrawLine(25, 21, 26, 21, Oilblack);
  player.DrawLine(27, 21, 32, 21, darkredshade);
  player.DrawLine(33, 21, 34, 21, darkred);
  player.SetColor(17, 22, Oilblack);
  player.SetColor(18, 22, darkred);
  player.DrawLine(19, 22, 23, 22, darkredshade);
  player.SetColor(24, 22, darkred);
  player.DrawLine(25, 22, 26, 22, Oilblack);
  player.SetColor(27, 22, darkred);
  player.DrawLine(28, 22, 32, 22, darkredshade);
  player.SetColor(33, 22, darkred);
  player.SetColor(34, 22, Oilblack);
  player.DrawLine(17, 23, 18, 23, Oilblack);
  player.DrawLine(19, 23, 23, 23, darkred);
  player.DrawLine(24, 23, 27, 23, Oilblack);
  player.DrawLine(28, 23, 32, 23, darkred);
  player.DrawLine(33, 23, 34, 23, Oilblack);
  player.DrawRectangle(17, 24, 18, 3, Oilblack);
  player.DrawLine(18, 27, 33, 27, Oilblack);
  player.DrawLine(15, 27, 16, 27, darkblue);
  player.DrawLine(35, 27, 36, 27, darkblue);
  player.SetColor(17, 27, darkblueshade);
  player.SetColor(34, 27, darkblueshade);
  player.DrawLine(14, 28, 16, 28, darkblue);
  player.DrawLine(17, 28, 18, 28, darkblueshade);
  player.DrawLine(19, 28, 20, 28, Oilblack);
  player.SetColor(21, 28, lightgray);
  player.DrawLine(22, 28, 29, 28, Oilblack);
  player.SetColor(30, 28, lightgray);
  player.DrawLine(31, 28, 32, 28, Oilblack);
  player.DrawLine(33, 28, 34, 28, darkblueshade);
  player.DrawLine(35, 28, 37, 28, darkblue);
  player.SetColor(13, 29, gray);
  player.DrawLine(14, 29, 17, 29, darkblue);
  player.SetColor(18, 29, darkblueshade);
  player.SetColor(19, 29, lightgray);
  player.SetColor(20, 29, Oilblack);
  player.DrawLine(21, 29, 22, 29, lightgray);
  player.DrawLine(23, 29, 24, 29, Oilblack);
  player.SetColor(25, 29, darkblueshade);
  player.DrawLine(26, 29, 28, 29, Oilblack);
  player.DrawLine(29, 29, 30, 29, lightgray);
  player.SetColor(31, 29, Oilblack);
  player.SetColor(32, 29, lightgray);
  player.SetColor(33, 29, darkblueshade);
  player.DrawLine(34, 29, 37, 29, darkblue);
  player.SetColor(38, 29, gray);
  player.DrawLine(13, 30, 14, 30, gray);
  player.DrawLine(15, 30, 16, 30, darkblue);
  player.SetColor(12, 30, skin);
  player.DrawLine(17, 30, 18, 30, darkblueshade);
  player.DrawLine(19, 30, 23, 30, lightgray);
  player.SetColor(24, 30, Oilblack);
  player.DrawLine(25, 30, 26, 30, darkblue);
  player.SetColor(27, 30, darkblueshade);
  player.DrawLine(28, 30, 32, 30, lightgray);
  player.DrawLine(33, 30, 34, 30, darkblueshade);
  player.DrawLine(35, 30, 36, 30, darkblue);
  player.DrawLine(37, 30, 38, 30, gray);
  player.SetColor(39, 30, skin);
  player.DrawLine(11, 31, 12, 31, skin);
  player.DrawLine(13, 31, 15, 31, gray);
  player.SetColor(16, 31, darkblueshade);
  player.SetColor(17, 31, lightgray);
  player.DrawLine(18, 31, 19, 31, gray);
  player.DrawLine(20, 31, 23, 31, lightgray);
  player.SetColor(24, 31, darkblueshade);
  player.DrawLine(25, 31, 27, 31, darkblue);
  player.DrawLine(28, 31, 31, 31, lightgray);
  player.DrawLine(32, 31, 33, 31, gray);
  player.SetColor(34, 31, lightgray);
  player.SetColor(35, 31, darkblueshade);
  player.DrawLine(36, 31, 38, 31, gray);
  player.DrawLine(39, 31, 40, 31, skin);
  player.DrawLine(11, 32, 14, 32, skin);
  player.DrawLine(15, 32, 19, 32, lightgray);
  player.DrawLine(20, 32, 22, 32, gray);
  player.SetColor(23, 32, darkblueshade);
  player.DrawLine(24, 32, 27, 32, darkblue);
  player.SetColor(28, 32, darkblueshade);
  player.DrawLine(29, 32, 31, 32, gray);
  player.DrawLine(32, 32, 36, 32, lightgray);
  player.DrawLine(37, 32, 40, 32, skin);
  player.DrawRectangle(14, 33, 6, 3, lightgray);
  player.DrawRectangle(32, 33, 6, 3, lightgray);
  player.DrawRectangle(20, 33, 12, 6, darkblue);
  player.DrawLine(11, 33, 13, 33, skin);
  player.DrawLine(38, 33, 40, 33, skin);
  player.SetColor(10, 34, lightgray);
  player.SetColor(11, 34, darkblueshade);
  player.DrawLine(12, 34, 13, 34, darkblue);
  player.DrawLine(38, 34, 39, 34, darkblue);
  player.SetColor(40, 34, darkblueshade);
  player.SetColor(41, 34, lightgray);
  player.DrawLine(10, 35, 11, 35, lightgray);
  player.SetColor(12, 35, darkblueshade);
  player.SetColor(13, 35, darkblue);
  player.DrawLine(40, 35, 41, 35, lightgray);
  player.SetColor(39, 35, darkblueshade);
  player.SetColor(38, 35, darkblue);
  player.SetColor(12, 36, lightgray);
  player.DrawLine(13, 36, 15, 36, darkblueshade);
  player.DrawLine(16, 36, 19, 36, darkblue);
  player.DrawLine(32, 36, 35, 36, darkblue);
  player.DrawLine(36, 36, 38, 36, darkblueshade);
  player.SetColor(39, 36, lightgray);
  player.DrawLine(13, 37, 15, 37, lightgray);
  player.DrawLine(16, 37, 17, 37, darkblueshade);
  player.DrawLine(18, 37, 19, 37, darkblue);
  player.DrawLine(36, 37, 38, 37, lightgray);
  player.DrawLine(34, 37, 35, 37, darkblueshade);
  player.DrawLine(32, 37, 33, 37, darkblue);
  player.DrawLine(16, 38, 17, 38, lightgray);
  player.DrawLine(18, 38, 19, 38, darkblueshade);
  player.DrawLine(32, 38, 33, 38, darkblueshade);
  player.DrawLine(34, 38, 35, 38, lightgray);
  player.DrawLine(18, 39, 19, 39, lightgray);
  player.DrawLine(20, 39, 21, 39, darkblueshade);
  player.DrawLine(22, 39, 29, 39, darkblue);
  player.DrawLine(30, 39, 31, 39, darkblueshade);
  player.DrawLine(32, 39, 33, 39, lightgray);
  player.DrawLine(20, 40, 21, 40, lightgray);
  player.DrawLine(22, 40, 29, 40, darkblue);
  player.DrawLine(30, 40, 31, 40, lightgray);
  player.DrawLine(22, 41, 29, 41, lightgray);
  player.DrawRectangle(22, 42, 3, 5, brown);
  player.DrawRectangle(27, 42, 3, 5, brown);

  player.SaveImageBmp("player.bmp");
}

void DrawProjectile() {
  graphics::Image playerp(10, 10);
  graphics::Color silver(177, 187, 191);
  graphics::Color lightbrown(73, 49, 12);
  graphics::Color darkgold(207, 177, 74);
  graphics::Color brown(43, 30, 8);
  graphics::Color darkgray(177, 187, 191);
  graphics::Color gold(215, 190, 105);

  playerp.DrawRectangle(0, 0, 10, 10, graphics::Color(63, 192, 199));
  playerp.DrawRectangle(2, 5, 5, 2, gold);
  playerp.DrawRectangle(3, 1, 3, 5, darkgray);
  playerp.DrawRectangle(3, 7, 3, 3, brown);
  playerp.DrawLine(3, 1, 3, 5, silver);
  playerp.DrawLine(3, 7, 3, 9, lightbrown);
  playerp.SetColor(4, 0, silver);
  playerp.SetColor(2, 5, darkgold);
  playerp.SetColor(6, 5, darkgold);

  playerp.SaveImageBmp("projectile.bmp");
}

void Player::Draw(graphics::Image &screen) {
  graphics::Image play;

  DrawPlayer();

  play.Load("player.bmp");

  int width = Player::GetWidth();
  int height = Player::GetHeight();
  int h = screen.GetHeight();
  int w = screen.GetWidth();

  for (int i = 0; i < width; i++) {
    for (int j = 0; j < height; j++) {
      int red = play.GetRed(i, j);
      int green = play.GetGreen(i, j);
      int blue = play.GetBlue(i, j);
      int a = GetX() + i;
      int b = GetY() + j;
      if (a < 0 || b < 0 || a >= w || b >= h) {
        break;
      } else {
        screen.SetBlue(a, b, blue);
        screen.SetRed(a, b, red);
        screen.SetGreen(a, b, green);
      }
    }
  }
}

void PlayerProjectile::Draw(graphics::Image &screen) {
  graphics::Image play;

  DrawProjectile();

  play.Load("projectile.bmp");

  int width = PlayerProjectile::GetWidth();
  int height = PlayerProjectile::GetHeight();
  int h = screen.GetHeight();
  int w = screen.GetWidth();

  for (int i = 0; i < width; i++) {
    for (int j = 0; j < height; j++) {
      int red = play.GetRed(i, j);
      int green = play.GetGreen(i, j);
      int blue = play.GetBlue(i, j);
      int a = GetX() + i;
      int b = GetY() + j;
      if (a < 0 || b < 0 || a >= w || b >= h) {
        break;
      } else {
        screen.SetBlue(a, b, blue);
        screen.SetRed(a, b, red);
        screen.SetGreen(a, b, green);
      }
    }
  }
}

void PlayerProjectile::Move(const graphics::Image &screen) {
  int decrease = GetY();
  decrease -= 3;

  SetY(decrease);

  graphics::Image im(screen.GetWidth(), screen.GetHeight());

  bool bounds = IsOutOfBounds(im);
  if (bounds) {
    SetIsActive(false);
  }
}
