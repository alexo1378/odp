#include <iostream>
#include "GUI.h"

GUISystem::GUISystem(Player* subject) 
{
	player = subject;
	health = -1;
	player->AddObserver(this);

	Update();
}

void GUISystem::Update()
{
	health = (float)player->GetCurrentHealth() / (float)player->GetTotalHealth();
}

void GUISystem::DisplayHealthBar() const
{
	std::cout << "health bar" << health * 100.0f << "% full" << std::endl;
}