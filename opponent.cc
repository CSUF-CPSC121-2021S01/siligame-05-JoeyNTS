#include "opponent.h"
#include <vector>
#include "cpputils/graphics/image.h"

void OpponentProjectile::PadPoints(std::vector<int> &points, int pad_x,
                                   int pad_y) {
  for (int i = 0; i < points.size(); i++) {
    if (i % 2 == 0) {
      points[i] += pad_x;
    } else {
      points[i] += pad_y;
    }
  }
}

void Opponent::PadPoints(std::vector<int> &points, int pad_x, int pad_y) {
  for (int i = 0; i < points.size(); i++) {
    if (i % 2 == 0) {
      points[i] += pad_x;
    } else {
      points[i] += pad_y;
    }
  }
}

std::unique_ptr<OpponentProjectile> Opponent::LaunchProjectile() {
  std::unique_ptr<OpponentProjectile> oprejectile(new class OpponentProjectile);
  if (counter == 10) {
    counter -= 10;

    return oprejectile;
  }

  counter++;
  return nullptr;
}

void CreateOpponent() {
  graphics::Image foe(50, 50);

  graphics::Color Oilblack(34, 32, 32);
  graphics::Color darkred(141, 2, 2);
  graphics::Color darkredshade(161, 6, 6);
  graphics::Color darkblue(6, 111, 169);
  graphics::Color darkblueshade(9, 99, 148);
  graphics::Color lightgray(226, 233, 236);
  graphics::Color gray(204, 207, 208);
  graphics::Color skin(236, 188, 180);
  graphics::Color brown(43, 30, 8);
  graphics::Color yellow(197, 219, 100);
  graphics::Color blood(136, 8, 8);
  graphics::Color meat(232, 179, 185);
  graphics::Color doll(247, 213, 212);
  graphics::Color bloodmeat(170, 60, 59);
  graphics::Color salmon(203, 104, 98);
  graphics::Color dblue(35, 64, 77);
  graphics::Color gold(215, 190, 105);
  graphics::Color lime(38, 73, 62);
  graphics::Color darkgray(177, 187, 191);
  graphics::Color black(0, 0, 0);
  graphics::Color lightbrown(73, 49, 12);
  graphics::Color darkgold(207, 177, 74);
  graphics::Color silver(177, 187, 191);

  foe.DrawRectangle(0, 0, 50, 50, graphics::Color(63, 192, 199));
  foe.DrawLine(22, 2, 27, 2, yellow);
  foe.DrawLine(20, 3, 29, 3, yellow);
  foe.DrawLine(19, 4, 30, 4, yellow);
  foe.DrawLine(18, 5, 20, 5, yellow);
  foe.DrawLine(21, 5, 28, 5, darkredshade);
  foe.DrawLine(29, 5, 31, 5, yellow);
  foe.DrawLine(16, 6, 18, 6, yellow);
  foe.DrawLine(19, 6, 20, 6, darkredshade);
  foe.DrawLine(21, 6, 28, 6, darkred);
  foe.DrawLine(29, 6, 30, 6, darkredshade);
  foe.DrawLine(31, 6, 33, 6, yellow);
  foe.DrawLine(15, 7, 17, 7, yellow);
  foe.DrawLine(18, 7, 19, 7, darkredshade);
  foe.SetColor(20, 7, darkred);
  foe.DrawLine(21, 7, 28, 7, yellow);
  foe.DrawLine(30, 7, 31, 7, darkredshade);
  foe.SetColor(29, 7, darkredshade);
  foe.DrawLine(32, 7, 34, 7, yellow);
  foe.DrawLine(15, 8, 16, 8, yellow);
  foe.DrawLine(17, 8, 18, 8, darkredshade);
  foe.SetColor(19, 8, darkred);
  foe.DrawLine(20, 8, 29, 8, yellow);
  foe.SetColor(30, 8, darkred);
  foe.DrawLine(31, 8, 32, 8, darkredshade);
  foe.DrawLine(33, 8, 34, 8, yellow);
  foe.DrawLine(15, 9, 15, 12, yellow);
  foe.DrawLine(16, 9, 17, 9, darkredshade);
  foe.SetColor(18, 9, darkred);
  foe.SetColor(31, 9, darkred);
  foe.DrawLine(19, 9, 30, 9, yellow);
  foe.DrawLine(32, 9, 33, 9, darkredshade);
  foe.DrawLine(34, 9, 34, 12, yellow);
  foe.DrawLine(16, 10, 16, 11, darkredshade);
  foe.DrawLine(17, 10, 17, 12, darkred);
  foe.SetColor(16, 12, darkred);
  foe.DrawLine(32, 10, 32, 12, darkred);
  foe.DrawLine(33, 10, 33, 11, darkredshade);
  foe.SetColor(33, 12, darkred);
  foe.DrawRectangle(18, 10, 14, 3, yellow);
  foe.DrawLine(15, 13, 19, 13, yellow);
  foe.DrawLine(20, 13, 22, 13, blood);
  foe.DrawLine(23, 13, 23, 17, meat);
  foe.DrawRectangle(24, 13, 2, 7, doll);
  foe.DrawLine(26, 13, 28, 13, darkblue);
  foe.DrawLine(28, 14, 28, 15, darkblue);
  foe.DrawRectangle(26, 14, 2, 2, darkblueshade);
  foe.DrawLine(29, 13, 29, 17, doll);
  foe.DrawLine(30, 14, 30, 17, doll);
  foe.DrawRectangle(26, 16, 3, 3, doll);
  foe.DrawLine(30, 13, 34, 13, yellow);
  foe.DrawRectangle(31, 14, 4, 2, yellow);
  foe.DrawLine(31, 16, 33, 16, yellow);
  foe.SetColor(31, 17, yellow);
  foe.DrawLine(29, 18, 30, 18, yellow);
  foe.DrawLine(26, 19, 28, 19, yellow);
  foe.DrawRectangle(15, 14, 4, 2, yellow);
  foe.DrawLine(16, 16, 18, 16, yellow);
  foe.SetColor(18, 17, yellow);
  foe.DrawLine(19, 18, 20, 18, yellow);
  foe.DrawLine(21, 19, 23, 19, yellow);
  foe.DrawLine(19, 14, 19, 17, meat);
  foe.DrawLine(20, 17, 22, 17, meat);
  foe.DrawLine(21, 18, 22, 18, meat);
  foe.DrawLine(20, 16, 22, 16, salmon);
  foe.SetColor(20, 15, salmon);
  foe.SetColor(22, 15, salmon);
  foe.SetColor(21, 15, bloodmeat);
  foe.SetColor(20, 14, bloodmeat);
  foe.SetColor(22, 14, bloodmeat);
  foe.SetColor(21, 14, blood);
  foe.SetColor(23, 18, doll);
  foe.DrawLine(24, 20, 25, 20, skin);
  foe.DrawLine(23, 21, 26, 21, doll);
  foe.DrawRectangle(17, 21, 3, 3, lightgray);
  foe.DrawLine(21, 21, 22, 21, lightgray);
  foe.DrawRectangle(16, 22, 3, 3, lightgray);
  foe.DrawRectangle(15, 23, 3, 3, lightgray);
  foe.DrawRectangle(14, 24, 3, 3, lightgray);
  foe.DrawLine(13, 25, 13, 27, gray);
  foe.DrawLine(14, 27, 15, 27, gray);
  foe.DrawLine(12, 26, 12, 28, lightgray);
  foe.DrawLine(13, 28, 14, 28, lightgray);
  foe.DrawRectangle(10, 28, 2, 3, doll);
  foe.DrawLine(12, 29, 13, 29, doll);
  foe.SetColor(12, 30, doll);
  foe.SetColor(11, 27, doll);
  foe.DrawLine(27, 21, 28, 21, lightgray);
  foe.DrawLine(21, 22, 28, 22, lightgray);
  foe.DrawLine(21, 23, 23, 23, lightgray);
  foe.DrawLine(26, 23, 28, 23, lightgray);
  foe.DrawLine(21, 24, 22, 24, lightgray);
  foe.DrawLine(27, 24, 28, 24, lightgray);
  foe.SetColor(21, 25, lightgray);
  foe.SetColor(28, 25, lightgray);
  foe.DrawLine(20, 21, 20, 27, dblue);
  foe.DrawLine(29, 21, 29, 27, dblue);
  foe.DrawRectangle(24, 23, 2, 4, dblue);
  foe.DrawRectangle(23, 24, 4, 2, dblue);
  foe.SetColor(22, 25, gold);
  foe.SetColor(23, 26, gold);
  foe.SetColor(27, 25, gold);
  foe.SetColor(26, 26, gold);
  foe.DrawLine(24, 27, 25, 27, gold);
  foe.DrawLine(21, 28, 28, 28, dblue);
  foe.DrawLine(21, 26, 22, 26, dblue);
  foe.DrawLine(27, 26, 28, 26, dblue);
  foe.DrawLine(21, 27, 23, 27, dblue);
  foe.DrawLine(26, 27, 28, 27, dblue);
  foe.DrawLine(22, 29, 27, 29, dblue);
  foe.DrawRectangle(30, 21, 2, 3, lightgray);
  foe.SetColor(32, 21, darkgray);
  foe.SetColor(33, 22, darkgray);
  foe.DrawLine(32, 23, 33, 23, darkgray);
  foe.SetColor(32, 22, lightgray);
  foe.SetColor(34, 23, meat);
  foe.SetColor(31, 25, meat);
  foe.DrawLine(31, 24, 32, 24, meat);
  foe.DrawLine(33, 24, 34, 24, salmon);
  foe.DrawLine(32, 25, 32, 26, salmon);
  foe.SetColor(33, 26, salmon);
  foe.SetColor(34, 25, salmon);
  foe.SetColor(34, 27, salmon);
  foe.SetColor(35, 26, salmon);
  foe.SetColor(33, 25, bloodmeat);
  foe.SetColor(34, 26, bloodmeat);
  foe.SetColor(35, 25, bloodmeat);
  foe.SetColor(33, 27, bloodmeat);
  foe.SetColor(36, 26, bloodmeat);
  foe.DrawLine(33, 28, 34, 28, bloodmeat);
  foe.DrawLine(35, 27, 36, 27, bloodmeat);
  foe.DrawLine(35, 28, 36, 28, blood);
  foe.DrawLine(34, 29, 35, 29, blood);
  foe.DrawLine(20, 28, 20, 31, darkredshade);
  foe.DrawLine(21, 29, 21, 30, darkredshade);
  foe.DrawLine(28, 29, 28, 30, darkredshade);
  foe.DrawLine(29, 28, 29, 31, darkredshade);
  foe.DrawLine(22, 30, 27, 30, darkredshade);
  foe.DrawRectangle(19, 30, 2, 2, darkredshade);
  foe.DrawRectangle(18, 31, 2, 2, darkredshade);
  foe.DrawRectangle(17, 32, 2, 2, darkredshade);
  foe.DrawRectangle(16, 33, 2, 2, darkredshade);
  foe.DrawRectangle(15, 34, 2, 2, darkredshade);
  foe.DrawRectangle(14, 35, 2, 2, darkredshade);
  foe.DrawRectangle(29, 30, 2, 2, darkredshade);
  foe.DrawRectangle(30, 31, 2, 2, darkredshade);
  foe.DrawRectangle(31, 32, 2, 2, darkredshade);
  foe.DrawRectangle(32, 33, 2, 2, darkredshade);
  foe.DrawRectangle(33, 34, 2, 2, darkredshade);
  foe.DrawRectangle(34, 35, 2, 2, darkredshade);
  foe.DrawRectangle(22, 31, 2, 7, darkredshade);
  foe.DrawRectangle(26, 31, 2, 7, darkredshade);
  foe.SetColor(16, 32, lightgray);
  foe.SetColor(17, 33, lightgray);
  foe.SetColor(18, 34, lightgray);
  foe.SetColor(33, 32, lightgray);
  foe.SetColor(32, 33, lightgray);
  foe.SetColor(31, 34, lightgray);
  foe.DrawLine(19, 35, 30, 35, lightgray);
  foe.DrawRectangle(24, 31, 2, 4, lime);
  foe.DrawRectangle(24, 36, 2, 2, lime);
  foe.DrawLine(21, 31, 21, 34, lime);
  foe.DrawLine(20, 32, 20, 34, lime);
  foe.DrawLine(19, 33, 19, 34, lime);
  foe.DrawLine(28, 31, 28, 34, lime);
  foe.DrawLine(29, 32, 29, 34, lime);
  foe.DrawLine(30, 33, 30, 34, lime);
  foe.DrawLine(33, 36, 33, 37, lime);
  foe.DrawLine(34, 37, 35, 37, lime);
  foe.DrawLine(16, 36, 16, 37, lime);
  foe.DrawLine(14, 37, 15, 37, lime);
  foe.DrawLine(13, 35, 13, 36, lime);
  foe.DrawLine(36, 35, 36, 36, lime);
  foe.DrawRectangle(17, 35, 2, 3, lime);
  foe.DrawRectangle(31, 35, 2, 3, lime);
  foe.DrawRectangle(19, 36, 3, 2, lime);
  foe.DrawRectangle(28, 36, 3, 2, lime);
  foe.SetColor(19, 29, lime);
  foe.SetColor(18, 30, lime);
  foe.SetColor(17, 31, lime);
  foe.SetColor(15, 33, lime);
  foe.SetColor(14, 34, lime);
  foe.SetColor(30, 29, lime);
  foe.SetColor(31, 30, lime);
  foe.SetColor(32, 31, lime);
  foe.SetColor(34, 33, lime);
  foe.SetColor(35, 34, lime);
  foe.SetColor(12, 36, lightgray);
  foe.SetColor(13, 37, lightgray);
  foe.SetColor(37, 36, lightgray);
  foe.SetColor(36, 37, lightgray);
  foe.DrawLine(14, 38, 35, 38, lightgray);
  foe.SetColor(15, 39, lightgray);
  foe.SetColor(14, 40, lightgray);
  foe.SetColor(34, 39, lightgray);
  foe.SetColor(35, 40, lightgray);
  foe.SetColor(37, 38, lightgray);
  foe.SetColor(12, 38, lightgray);
  foe.DrawLine(17, 40, 17, 42, lightgray);
  foe.DrawLine(22, 40, 22, 42, lightgray);
  foe.DrawLine(27, 40, 27, 42, lightgray);
  foe.DrawLine(32, 40, 32, 42, lightgray);
  foe.DrawLine(16, 41, 18, 41, lightgray);
  foe.DrawLine(21, 41, 23, 41, lightgray);
  foe.DrawLine(26, 41, 28, 41, lightgray);
  foe.DrawLine(31, 41, 33, 41, lightgray);
  foe.SetColor(17, 41, yellow);
  foe.SetColor(22, 41, yellow);
  foe.SetColor(27, 41, yellow);
  foe.SetColor(32, 41, yellow);
  foe.SetColor(16, 42, dblue);
  foe.SetColor(33, 42, dblue);
  foe.SetColor(12, 37, dblue);
  foe.SetColor(37, 37, dblue);
  foe.SetColor(14, 39, dblue);
  foe.SetColor(35, 39, dblue);
  foe.DrawLine(11, 36, 11, 37, dblue);
  foe.DrawLine(13, 38, 13, 39, dblue);
  foe.DrawLine(15, 40, 15, 41, dblue);
  foe.DrawLine(16, 39, 16, 40, dblue);
  foe.DrawLine(17, 39, 32, 39, dblue);
  foe.DrawLine(18, 40, 21, 40, dblue);
  foe.DrawLine(23, 40, 26, 40, dblue);
  foe.DrawLine(28, 40, 31, 40, dblue);
  foe.DrawLine(19, 41, 20, 41, dblue);
  foe.DrawLine(24, 41, 25, 41, dblue);
  foe.DrawLine(29, 41, 30, 41, dblue);
  foe.DrawLine(18, 42, 21, 42, dblue);
  foe.DrawLine(23, 42, 26, 42, dblue);
  foe.DrawLine(28, 42, 31, 42, dblue);
  foe.DrawLine(33, 39, 33, 40, dblue);
  foe.DrawLine(34, 40, 34, 41, dblue);
  foe.DrawLine(36, 38, 36, 39, dblue);
  foe.DrawLine(38, 36, 38, 37, dblue);
  foe.DrawRectangle(26, 43, 4, 5, black);
  foe.DrawRectangle(27, 43, 2, 3, doll);
  foe.SetColor(21, 43, meat);
  foe.SetColor(22, 43, doll);
  foe.SetColor(21, 44, doll);
  foe.SetColor(21, 45, salmon);
  foe.SetColor(22, 44, salmon);
  foe.SetColor(22, 46, salmon);
  foe.SetColor(23, 46, blood);
  foe.DrawLine(23, 43, 23, 44, meat);
  foe.DrawLine(22, 45, 23, 45, bloodmeat);
  foe.DrawLine(21, 46, 21, 47, bloodmeat);
  foe.SetColor(22, 47, bloodmeat);

  foe.SaveImageBmp("foe.bmp");
}

void CreateOpponentProjectile() {
  graphics::Image foep(5, 5);
  graphics::Color lightgray(226, 233, 236);
  graphics::Color darkblueshade(9, 99, 148);
  graphics::Color darkblue(6, 111, 169);
  graphics::Color blood(136, 8, 8);

  foep.DrawRectangle(0, 0, 5, 5, lightgray);
  foep.DrawRectangle(1, 1, 3, 3, darkblueshade);
  foep.DrawRectangle(1, 2, 2, 2, darkblue);
  foep.SetColor(0, 0, blood);
  foep.SetColor(2, 0, blood);
  foep.SetColor(4, 0, blood);
  foep.SetColor(0, 2, blood);
  foep.SetColor(4, 2, blood);
  foep.SetColor(0, 4, blood);
  foep.SetColor(2, 4, blood);
  foep.SetColor(4, 4, blood);
  foep.SaveImageBmp("OpponentProjectile.bmp");
}

void Opponent::Draw(graphics::Image &screen) {
  graphics::Image Opponents;

  CreateOpponent();

  Opponents.Load("foe.bmp");

  int width = Opponent::GetWidth();
  int height = Opponent::GetHeight();
  int h = screen.GetHeight();
  int w = screen.GetWidth();

  for (int i = 0; i < width; i++) {
    for (int j = 0; j < height; j++) {
      int red = Opponents.GetRed(i, j);
      int green = Opponents.GetGreen(i, j);
      int blue = Opponents.GetBlue(i, j);
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

void OpponentProjectile::Draw(graphics::Image &screen) {
  graphics::Image foeprojectile;

  CreateOpponentProjectile();

  foeprojectile.Load("OpponentProjectile.bmp");

  int width = OpponentProjectile::GetWidth();
  int height = OpponentProjectile::GetHeight();
  int h = screen.GetHeight();
  int w = screen.GetWidth();

  for (int i = 0; i < width; i++) {
    for (int j = 0; j < height; j++) {
      int red = foeprojectile.GetRed(i, j);
      int green = foeprojectile.GetGreen(i, j);
      int blue = foeprojectile.GetBlue(i, j);
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

void Opponent::Move(const graphics::Image &screen) {
  int increase = GetX();
  increase += 2;

  int inc = GetY();
  inc += 2;

  SetY(inc);
  SetX(increase);

  graphics::Image im(screen.GetWidth(), screen.GetHeight());

  bool bounds = IsOutOfBounds(im);
  if (bounds) {
    SetIsActive(false);
  }
}

void OpponentProjectile::Move(const graphics::Image &screen) {
  int increase = GetY();
  increase += 3;

  SetY(increase);

  graphics::Image im(screen.GetWidth(), screen.GetHeight());

  bool bounds = IsOutOfBounds(im);
  if (bounds) {
    SetIsActive(false);
  }
}
