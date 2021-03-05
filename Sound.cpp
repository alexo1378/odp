#include "Sound.h"

SoundSystem::SoundSystem(Player* subject) : player(subject)
{
	RegisterSoundSystem();
	health = player->GetCurrentHealth();
}

void SoundSystem::Update()
{
		int currentHealth = player->GetCurrentHealth();

		if (currentHealth < health)
			PlaySound(Sound::PLAYER_HIT);
		else if (currentHealth > health)
			PlaySound(Sound::PLAYER_POWER_UP);
		else if (currentHealth == 0)
			PlaySound(Sound::PLAYER_DEAD);

		health = currentHealth;

}

void SoundSystem::RegisterSoundSystem()
{
	player->AddObserver(this);
}

void SoundSystem::UnregisterSoundSystem()
{
	player->RemoveObserver(this);
}

void SoundSystem::EnableSound()
{
	RegisterSoundSystem();
	std::cout << "Sound turned on..." << std::endl;
}

void SoundSystem::MuteSound()
{
	UnregisterSoundSystem();
	std::cout << "sound disabled..." << std::endl;
}

void SoundSystem::PlaySound(Sound sound) const
{
	switch (sound)
	{
		case Sound::PLAYER_HIT:
			std::cout << "playing \"ouch\" sound..." << std::endl;
			break;
		case Sound::PLAYER_POWER_UP:
			std::cout << "playing power up sound..." << std::endl;
			break;
		case Sound::PLAYER_DEAD:
			std::cout << "played funeral sound..." << std::endl;
			break;
	}
}
