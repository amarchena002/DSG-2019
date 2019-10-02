// TextGame.cpp : Main program entry point
//

#include "stdafx.h"
#include "World.h"
#include "GameLogic.h"
#include <Vector>


int main()
{
	vector<char> m_world = vector<char>();
	World world("inputfile.txt");
	Player player1 = world.getPlayer('1');
	Player player2 = world.getPlayer('2');
	GameLogic gameLogic(player1, player2, world);
	world.draw();
	while (!gameLogic.gameHasEnded())
	{
		world.draw();

		gameLogic.processInput();
	}

    return 0;
}

