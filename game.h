#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <vector>
#include "cpputils/graphics/image.h"
#include "cpputils/graphics/image_event.h"
#include "opponent.h"
#include "player.h"

class Game : public graphics::AnimationEventListener,
             public graphics::MouseEventListener {
 private:
  graphics::Image screen_;
  std::vector<std::unique_ptr<Opponent>> opponent_;
  std::vector<std::unique_ptr<OpponentProjectile>> foep_;
  std::vector<std::unique_ptr<PlayerProjectile>> playerp_;
  Player player_;
  int score = 0;
  bool in_game = false;

 public:
  Game() { screen_.Initialize(800, 600); }
  Game(int width, int height) { screen_.Initialize(width, height); }

  Player& GetPlayer() { return player_; }
  std::vector<std::unique_ptr<Opponent>>& GetOpponents() { return opponent_; }
  graphics::Image& GetGameScreen() { return screen_; }
  std::vector<std::unique_ptr<OpponentProjectile>>& GetOpponentProjectiles() {
    return foep_;
  }
  std::vector<std::unique_ptr<PlayerProjectile>>& GetPlayerProjectiles() {
    return playerp_;
  }
  void CreateOpponents();
  void CreateOpponentProjectiles();
  void CreatePlayerProjectiles();
  void Init();
  void UpdateScreen();
  void Start(graphics::Image& name) { name.ShowUntilClosed(); }
  void MoveGameElements();
  void FilterIntersections();
  void OnAnimationStep();
  void OnMouseEvent(const graphics::MouseEvent& event);
  int GetScore() const { return score; }
  bool HasLost() const { return in_game; }
  void LaunchProjectiles();
  void RemoveInactive();
};
#endif
