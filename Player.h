#pragma once
#include "Observer.h"

class Player : public Subject
{
public:
	Player(int life) : totalHealth(life), currentHealth(totalHealth) {};
	void Hit();
	void PickUpHealth();
	int GetTotalHealth() const { return totalHealth; }
	int GetCurrentHealth() const { return currentHealth; }

private:
	const int totalHealth;
	int currentHealth;

};