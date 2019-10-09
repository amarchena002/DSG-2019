#include "stdafx.h"
#include "Player.h"


//int position = 0; Hay que cargarlo desde el archivo


Player::Player(int x,int y)
{
	c_coins = 0;
	c_x = x;
	c_y = y;
}

Player::Player()
{
}


Player::~Player()
{
}


void Player::moveUp()
{
	c_y--;
}

void Player::moveDown()
{
	c_y++;
}

void Player::moveRight()
{
	c_x++; 
}

void Player::moveLeft()
{
	c_x--;
}


int Player::getX()
{
	return c_x;
}

int Player::getY() {
	return c_y;
}

int Player::getcoin()
{
	return c_coins;
}

void Player::addcoin()
{
	c_coins++;
}
