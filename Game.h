#pragma once
#include "Observer.h"
#include "Player.h"

class GameSystem : public Observer
{
public:
	GameSystem(Player* subject);
	void Update() override;

private:
	Player* player;
	bool gameOver;
};