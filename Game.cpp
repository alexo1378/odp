
#include "Observer.h"
#include "Game.h"
#include <iostream>

GameSystem::GameSystem(Player* subject)
{
	player = subject;
	gameOver = false;

	player->AddObserver(this);
}

void GameSystem::Update()
{
	if (player->GetCurrentHealth() == 0)
	{
		gameOver = true;
		std::cout << "Game Over!" << std::endl;
	}
}

int main(int argc, char* argv[])
{
	Player* player = new Player(4);

	return 0;
}