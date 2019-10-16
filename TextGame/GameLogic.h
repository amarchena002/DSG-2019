#pragma once

#include "Player.h"
#include "World.h"
#include "../SoundManager-master/SoundManager/SoundManager.h"

class GameLogic
{

	Player m_player1, m_player2,m_playerB;
	World m_world;
	SoundManager soundManager;
	SoundManager* m_soundManager;

public:
	GameLogic(Player& player1, Player& player2, World& world);
	~GameLogic();

	void processInput();
	bool gameHasEnded();
	World getWorld();
	bool moveAllowed(char player,char ch);
	SoundManager* getSoundManager();
};

