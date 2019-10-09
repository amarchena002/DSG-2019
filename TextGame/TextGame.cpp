// TextGame.cpp : Main program entry point
//

#include "stdafx.h"
#include "World.h"
#include "GameLogic.h"
#include <Vector>
#include <iostream>

int main()
{
	vector<char> m_world = vector<char>();
	World world("inputfile.txt");
	Player player1 = world.getPlayer('1');
	Player player2 = world.getPlayer('2');
	GameLogic gameLogic(player1, player2, world);
	gameLogic.getWorld().draw();
	while (!gameLogic.gameHasEnded())
	{
		gameLogic.processInput();
		gameLogic.getWorld().draw();


	}
	cin.get();

    return 0;
}

