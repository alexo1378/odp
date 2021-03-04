#pragma once
#include "Observer.h"

class Player : public Subject
{
public:
	void Hit();
	void PickUpHealth();
	int GetTotalHealth() const { return totalHealth; }
	int GetCurrentHealth() const { return currentHealth; }

private:
	const int totalHealth;
	int currentHealth;

};