#include <iostream>
#include "Player.h"


void Player::Hit()
{
	if (currentHealth > 0)
	{
		currentHealth--;
		std::cout << "Player health is:" << GetCurrentHealth();
	}
	Notify();
}

void Player::PickUpHealth()
{
	if (currentHealth < totalHealth)
		currentHealth++;
	
	Notify();
}