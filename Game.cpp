#include "Observer.h"
#include "Player.h"
#include "Game.h"
#include "GUI.h"
#include "Sound.h"
#include <iostream>


GameSystem::GameSystem(Player* subject)
{
	gameOver = false;
	player = subject;
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

class ArrayMaker 
{


public:
	// declare a array of pointers
	int *array[5];

	ArrayMaker()
	{
		// make pointers in this array, nulls
		for (int i = 0; i < 5; i++)
			array[i] = nullptr;
	}



};

class ArrayDerived : public ArrayMaker
{

};

int main(int argc, char* argv[])
{
	/*
	// create a observable subject
	Player* player = new Player(4);

	// create observers and register with subject
	GUISystem guiSystem(player);
	GameSystem game(player);
	SoundSystem sound(player);
	*/

	ArrayMaker arrayMaker;
	arrayMaker.array;
	std::cin.get();
	


	/*
	do
	{
		char c;
		std::cin >> c;

		if (c == 'h')
		{
			player->Hit();
			std::cout << std::endl;
		}
		else if(c == 'p')
		{
			player->PickUpHealth();
			std::cout << std::endl;
		}
		else
		{
			std::cout << "Invalid character entered..." << std::endl;
		}

	} while (std::cin.get(), game.isOver() == false);


	*/
	return 0;
}