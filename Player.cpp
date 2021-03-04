#include "Player.h"

void Player::Hit()
{
	if (currentHealth > 0)
	{
		currentHealth--;
	}
	Notify();
}

void Player::PickUpHealth()
{
	if (currentHealth < totalHealth)
		currentHealth++;
	
	Notify();
}