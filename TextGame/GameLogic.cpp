#include "stdafx.h"
#include <iostream>
#include "GameLogic.h"
#include "System.h"
#include "World.h"
#include <stdio.h>
GameLogic::GameLogic(Player& player1, Player& player2, World& world)
	: m_player1(player1), m_player2(player2), m_world(world)
{
	m_world = world;
	m_player1 = player1;
	m_player2 = player2;
}


GameLogic::~GameLogic()
{
}

void GameLogic::processInput()
{
		char c = System::getNextKey();
		switch (c)
		{

		case 'a':
			//Do whatever needs to be done when 'a' is pressed
			m_playerB = m_player2;
			if (moveAllowed('2', 'l'))
			{
				m_player2.moveLeft();
				m_world.changeCells(m_playerB, m_player2, '2');
			}
			break;
		case 's':
			//Do whatever needs to be done when 's' is pressed
			m_playerB = m_player2;
			if (moveAllowed('2', 'd'))
			{
				m_player2.moveDown();
				m_world.changeCells(m_playerB, m_player2, '2');
			}
			break;
		case 'd':
			m_playerB = m_player2;
			if (moveAllowed('2', 'r'))
			{
				m_player2.moveRight();
				m_world.changeCells(m_playerB, m_player2, '2');
			}
			break;
		case 'w':
			m_playerB = m_player2;
			if (moveAllowed('2', 'u'))
			{
				m_player2.moveUp();
				m_world.changeCells(m_playerB, m_player2, '2');
			}
			break;
		case '4':
			m_playerB = m_player1;
			if (moveAllowed('1', 'l'))
			{
				m_player1.moveLeft();
				m_world.changeCells(m_playerB, m_player1, '1');
			}
			break;
		case '2':
			m_playerB = m_player1;
			if (moveAllowed('1', 'd'))
			{
				m_player1.moveDown();
				m_world.changeCells(m_playerB, m_player1, '1');
			}
			break;
		case '6':
			m_playerB = m_player1;
			if (moveAllowed('1', 'r'))
			{
				m_player1.moveRight();
			m_world.changeCells(m_playerB, m_player1, '1');
			}
			break;
		case '8':
			m_playerB = m_player1;
			if (moveAllowed('1', 'u'))
			{
				m_player1.moveUp();
				m_world.changeCells(m_playerB, m_player1, '1');
			}
			break;
		//...
		//...
		//...
		case 27:
			//'Esc' key pressed. Exit the game
			return;
		}
	
	
}

bool GameLogic::gameHasEnded()
{
	if (m_world.getCoins() == 0)
	{
		if (m_world.getPlayer('1').getcoin() > m_world.getPlayer('2').getcoin())
		{
			std::cout << "Winner player 1";
		}
		else if (m_world.getPlayer('1').getcoin() == m_world.getPlayer('2').getcoin())
		{
			std::cout << "Tie";
		}
		else
			std::cout << "Winner player2";
		return true;
	}
		//TODO: We need to check it the game has ended	
	else
	{
		return false;
	}		
}

World GameLogic::getWorld()
{
	return m_world;
}

bool GameLogic::moveAllowed(char player,char ch)
{
	switch (ch)
	{
	case 'u':
		if (m_world.getCell(m_world.getPlayer(player).getX(), m_world.getPlayer(player).getY() - 1) == '#'
			|| m_world.getCell(m_world.getPlayer(player).getX(), m_world.getPlayer(player).getY() - 1) == '1'
			|| m_world.getCell(m_world.getPlayer(player).getX(), m_world.getPlayer(player).getY() - 1) == '2')
		{
			return false;
		}
		else if (m_world.getCell(m_world.getPlayer(player).getX(), m_world.getPlayer(player).getY() - 1) == '?')
		{
			m_world.addCoin(player);
			return true;
		}
		else
		{
			return true;
		}
		break;
	case 'd':
		if (m_world.getCell(m_world.getPlayer(player).getX(), m_world.getPlayer(player).getY() + 1) == '#'
			|| m_world.getCell(m_world.getPlayer(player).getX(), m_world.getPlayer(player).getY() + 1) == '1'
			|| m_world.getCell(m_world.getPlayer(player).getX(), m_world.getPlayer(player).getY() + 1) == '2')
		{
			return false;
		}
		else if (m_world.getCell(m_world.getPlayer(player).getX(), m_world.getPlayer(player).getY() + 1) == '?')
		{
			m_world.addCoin(player);
			return true;
		}
		else
		{
			return true;
		}
		break;
	case 'l':
			if (m_world.getCell(m_world.getPlayer(player).getX() - 1, m_world.getPlayer(player).getY() ) == '#'
				|| m_world.getCell(m_world.getPlayer(player).getX() - 1, m_world.getPlayer(player).getY()) == '1'
				|| m_world.getCell(m_world.getPlayer(player).getX() - 1, m_world.getPlayer(player).getY()) == '2')
			{
				return false;
			}
			else if (m_world.getCell(m_world.getPlayer(player).getX() - 1, m_world.getPlayer(player).getY()) == '?')
			{
				m_world.addCoin(player);
				return true;
			}
			else
			{
				return true;
			}
			break;
	case 'r':
				if (m_world.getCell(m_world.getPlayer(player).getX() + 1, m_world.getPlayer(player).getY() ) == '#'
					|| m_world.getCell(m_world.getPlayer(player).getX() + 1, m_world.getPlayer(player).getY()) == '1'
					|| m_world.getCell(m_world.getPlayer(player).getX() + 1, m_world.getPlayer(player).getY()) == '2')
				{
					return false;
				}
				else if (m_world.getCell(m_world.getPlayer(player).getX() + 1, m_world.getPlayer(player).getY()) == '?')
				{
					m_world.addCoin(player);
					return true;
				}
				else
				{
					return true;
				}
		break;
	}
}

