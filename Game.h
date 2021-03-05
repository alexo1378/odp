#pragma once
#include "Observer.h"
#include "Player.h"

class GameSystem : public Observer
{
public:
	GameSystem(Player* subject);
	void Update() override;
	bool isOver() { return gameOver; }

private:
	Player* player;
	bool gameOver;
};