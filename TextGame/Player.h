#pragma once

class Player
{
	int c_x;
	int c_y;
	int c_coins;

public:
	Player(int x, int y);
	Player();
	~Player();

	void moveUp();
	void moveDown();
	void moveRight();
	void moveLeft();
	int getX();
	int getY();
	int getcoin();
	void addcoin();

};

