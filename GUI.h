#pragma once
#include "Observer.h"
#include "Player.h"

class GUISystem : public Observer
{
public:
	GUISystem(Player* subject);
	void Update() override;
private:
	void DisplayHealthBar() const;
	Player* player;
	float health;
};