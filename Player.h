#pragma once
#include "Observer.h"

class Player : public Subject
public:
	void Hit();
	void PickUpHealth();
	int GetLife() const { int life };

private:
	const int initialLife;
