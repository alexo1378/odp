#pragma once
#include <iostream>
#include "Observer.h"
#include "Player.h"

class SoundSystem : Observer
{
public:
	SoundSystem(Player* subject);
	void EnableSound();
	void MuteSound();
	void Update() override;
	
	void RegisterSoundSystem();
	void UnregisterSoundSystem();

private:
	enum class Sound 
	{
		PLAYER_HIT, 
		PLAYER_DEAD, 
		PLAYER_POWER_UP
	};

	void PlaySound(Sound sound) const;
	Player* player;
	int health;
};
