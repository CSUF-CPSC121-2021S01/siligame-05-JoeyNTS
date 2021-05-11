#include "game.h"
#include <vector>
#include "cpputils/graphics/image.h"

void Game::CreateOpponents() {
  std::unique_ptr<Opponent> Oponent(new class Opponent(100, 10));
  opponent_.push_back(std::move(Oponent));

  std::unique_ptr<Opponent> foe(new class Opponent(5, 10));
  opponent_.push_back(std::move(foe));
}

void Game::Init() {
  player_.SetX(50);
  player_.SetY(500);
  screen_.AddMouseEventListener(*this);
  screen_.AddAnimationEventListener(*this);
}

void Game::LaunchProjectiles() {
  for (int i = 0; i < opponent_.size(); i++) {
    if (opponent_[i]->LaunchProjectile()) {
      std::unique_ptr<OpponentProjectile> nya(new class OpponentProjectile(
          opponent_[i]->GetX() + 25, opponent_[i]->GetY() + 50));
      foep_.push_back(std::move(nya));
    }
  }
}

void Game::UpdateScreen() {
  if (player_.GetIsActive()) {
    player_.Draw(screen_);
  } else {
    screen_.DrawText(400, 300, "Game Over", 50, 161, 6, 6);
  }

  for (int i = 0; i < foep_.size(); i++) {
    if (foep_[i]->GetIsActive()) {
      foep_[i]->Draw(screen_);
    }
  }

  for (int i = 0; i < playerp_.size(); i++) {
    if (playerp_[i]->GetIsActive()) {
      playerp_[i]->Draw(screen_);
    }
  }

  for (int i = 0; i < opponent_.size(); i++) {
    if (opponent_[i]->GetIsActive()) {
      opponent_[i]->Draw(screen_);
    }
  }
  std::string scoress = "Score: " + std::to_string(GetScore());
  screen_.DrawText(0, 0, scoress, 20, 161, 6, 6);
}

void Game::MoveGameElements() {
  for (int i = 0; i < foep_.size(); i++) {
    if (foep_[i]->GetIsActive()) {
      foep_[i]->Move(screen_);
    }
  }

  for (int i = 0; i < playerp_.size(); i++) {
    if (playerp_[i]->GetIsActive()) {
      playerp_[i]->Move(screen_);
    }
  }

  for (int i = 0; i < opponent_.size(); i++) {
    if (opponent_[i]->GetIsActive()) {
      opponent_[i]->Move(screen_);
    }
  }
}

void Game::RemoveInactive() {
  for (auto i = foep_.size(); i--;) {
    if (!(foep_[i]->GetIsActive())) {
      foep_.erase(foep_.begin() + i);
    }
  }

  for (auto i = opponent_.size(); i--;) {
    if (!(opponent_[i]->GetIsActive())) {
      opponent_.erase(opponent_.begin() + i);
    }
  }

  for (auto i = playerp_.size(); i--;) {
    if (!(playerp_[i]->GetIsActive())) {
      playerp_.erase(playerp_.begin() + i);
    }
  }
}

void Game::FilterIntersections() {
  for (int i = 0; i < opponent_.size(); i++) {
    if (player_.IntersectsWith(opponent_[i].get())) {
      player_.SetIsActive(false);
      opponent_[i]->SetIsActive(false);
      in_game = true;
    }
  }

  for (int i = 0; i < playerp_.size(); i++) {
    for (int j = 0; j < opponent_.size(); j++) {
      if (playerp_[i]->IntersectsWith(opponent_[j].get())) {
        playerp_[i]->SetIsActive(false);
        opponent_[j]->SetIsActive(false);
        if (player_.GetIsActive()) {
          score++;
        }
      }
    }
  }

  for (int i = 0; i < foep_.size(); i++) {
    if (foep_[i]->IntersectsWith(&player_)) {
      foep_[i]->SetIsActive(false);
      player_.SetIsActive(false);
      in_game = true;
    }
  }
}

void Game::OnAnimationStep() {
  if (opponent_.size() == 0) {
    CreateOpponents();
  }
  MoveGameElements();
  LaunchProjectiles();
  FilterIntersections();
  RemoveInactive();
  UpdateScreen();
  screen_.Flush();
}

void Game::OnMouseEvent(const graphics::MouseEvent& event) {
  if (event.GetMouseAction() == graphics::MouseAction::kMoved ||
      event.GetMouseAction() == graphics::MouseAction::kDragged) {
    if (!(event.GetX() >= screen_.GetWidth() || event.GetX() < 0 ||
          event.GetY() >= screen_.GetHeight() || event.GetY() < 0)) {
      player_.SetX(event.GetX() - (player_.GetWidth() / 2));
      player_.SetY(event.GetY() - (player_.GetHeight() / 2));
      if (event.GetMouseAction() == graphics::MouseAction::kDragged) {
        std::unique_ptr<PlayerProjectile> playerp(
            new PlayerProjectile(player_.GetX() + 25, player_.GetY()));
        playerp_.push_back(std::move(playerp));
      }
    }
  }
  if (event.GetMouseAction() == graphics::MouseAction::kPressed) {
    std::unique_ptr<PlayerProjectile> playerp(
        new PlayerProjectile(player_.GetX() + 25, player_.GetY()));
    playerp_.push_back(std::move(playerp));
  }
}
