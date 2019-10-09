#include "stdafx.h"
#include "CppUnitTest.h"
#include <Vector>
#include "../TextGame/GameLogic.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TextGameTest
{		
	TEST_CLASS(UnitTest1)
	{

	public:

		
		TEST_METHOD(CoinsAreEqual)
		{
			// TODO: Your test code here
			vector<char> mundo = vector<char>();
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');

			mundo.push_back('#');
			mundo.push_back('2');
			mundo.push_back(' ');
			mundo.push_back('?');
			mundo.push_back('#');

			mundo.push_back('#');
			mundo.push_back(' ');
			mundo.push_back(' ');
			mundo.push_back('?');
			mundo.push_back('#');

			mundo.push_back('#');
			mundo.push_back(' ');
			mundo.push_back(' ');
			mundo.push_back('1');
			mundo.push_back('#');

			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');

			World world = World(5, 5, mundo);
			Player player1 = world.getPlayer('1');
			Player player2 = world.getPlayer('2');
			GameLogic game = GameLogic(player1, player2, world);

			Assert::AreEqual(2, world.getCoins());
		}

		TEST_METHOD(CoinsNotEqual)
		{
			// TODO: Your test code here
			vector<char> mundo = vector<char>();
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');

			mundo.push_back('#');
			mundo.push_back('2');
			mundo.push_back(' ');
			mundo.push_back('?');
			mundo.push_back('#');

			mundo.push_back('#');
			mundo.push_back(' ');
			mundo.push_back(' ');
			mundo.push_back('?');
			mundo.push_back('#');

			mundo.push_back('#');
			mundo.push_back(' ');
			mundo.push_back(' ');
			mundo.push_back('1');
			mundo.push_back('#');

			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');

			World world = World(5, 5, mundo);
			Player player1 = world.getPlayer('1');
			Player player2 = world.getPlayer('2');
			GameLogic game = GameLogic(player1, player2, world);

			Assert::AreNotEqual(25, world.getCoins());
		}

		TEST_METHOD(PlayerTwoCoords)
		{
			// TODO: Your test code here
			vector<char> mundo = vector<char>();
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');

			mundo.push_back('#');
			mundo.push_back('2');
			mundo.push_back(' ');
			mundo.push_back('?');
			mundo.push_back('#');

			mundo.push_back('#');
			mundo.push_back(' ');
			mundo.push_back(' ');
			mundo.push_back('?');
			mundo.push_back('#');

			mundo.push_back('#');
			mundo.push_back(' ');
			mundo.push_back(' ');
			mundo.push_back('1');
			mundo.push_back('#');

			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');

			World world = World(5, 5, mundo);
			Player player1 = world.getPlayer('1');
			Player player2 = world.getPlayer('2');
			GameLogic game = GameLogic(player1, player2, world);

			Assert::AreEqual(1, player2.getX());
			Assert::AreEqual(1, player2.getY());
		}
		TEST_METHOD(PlayerOneCoords)
		{
			// TODO: Your test code here
			vector<char> mundo = vector<char>();
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');

			mundo.push_back('#');
			mundo.push_back('2');
			mundo.push_back(' ');
			mundo.push_back('?');
			mundo.push_back('#');

			mundo.push_back('#');
			mundo.push_back(' ');
			mundo.push_back(' ');
			mundo.push_back('?');
			mundo.push_back('#');

			mundo.push_back('#');
			mundo.push_back(' ');
			mundo.push_back(' ');
			mundo.push_back('1');
			mundo.push_back('#');

			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');

			World world = World(5, 5, mundo);
			Player player1 = world.getPlayer('1');
			Player player2 = world.getPlayer('2');
			GameLogic game = GameLogic(player1, player2, world);

			Assert::AreEqual(3, player1.getX());
			Assert::AreEqual(3, player1.getY());
		}
		TEST_METHOD(PlayerTwoUp)
		{
			// TODO: Your test code here
			vector<char> mundo = vector<char>();
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');

			mundo.push_back('#');
			mundo.push_back('2');
			mundo.push_back(' ');
			mundo.push_back('?');
			mundo.push_back('#');

			mundo.push_back('#');
			mundo.push_back(' ');
			mundo.push_back(' ');
			mundo.push_back('?');
			mundo.push_back('#');

			mundo.push_back('#');
			mundo.push_back(' ');
			mundo.push_back(' ');
			mundo.push_back('1');
			mundo.push_back('#');

			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');

			World world = World(5, 5, mundo);
			Player player1 = world.getPlayer('1');
			Player player2 = world.getPlayer('2');
			GameLogic game = GameLogic(player1, player2, world);

			Assert::AreEqual(false, game.moveAllowed('2', 'u'));
		}
		TEST_METHOD(PlayerTwoLeft)
		{
			// TODO: Your test code here
			vector<char> mundo = vector<char>();
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');

			mundo.push_back('#');
			mundo.push_back('2');
			mundo.push_back(' ');
			mundo.push_back('?');
			mundo.push_back('#');

			mundo.push_back('#');
			mundo.push_back(' ');
			mundo.push_back(' ');
			mundo.push_back('?');
			mundo.push_back('#');

			mundo.push_back('#');
			mundo.push_back(' ');
			mundo.push_back(' ');
			mundo.push_back('1');
			mundo.push_back('#');

			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');

			World world = World(5, 5, mundo);
			Player player1 = world.getPlayer('1');
			Player player2 = world.getPlayer('2');
			GameLogic game = GameLogic(player1, player2, world);

			Assert::AreEqual(false, game.moveAllowed('2', 'l'));
		}
		TEST_METHOD(PlayerTwoDown)
		{
			// TODO: Your test code here
			vector<char> mundo = vector<char>();
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');

			mundo.push_back('#');
			mundo.push_back('2');
			mundo.push_back(' ');
			mundo.push_back('?');
			mundo.push_back('#');

			mundo.push_back('#');
			mundo.push_back(' ');
			mundo.push_back(' ');
			mundo.push_back('?');
			mundo.push_back('#');

			mundo.push_back('#');
			mundo.push_back(' ');
			mundo.push_back(' ');
			mundo.push_back('1');
			mundo.push_back('#');

			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');

			World world = World(5, 5, mundo);
			Player player1 = world.getPlayer('1');
			Player player2 = world.getPlayer('2');
			GameLogic game = GameLogic(player1, player2, world);

			Assert::AreEqual(true, game.moveAllowed('2', 'd'));
		}
		TEST_METHOD(PlayerTwoRight)
		{
			// TODO: Your test code here
			vector<char> mundo = vector<char>();
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');

			mundo.push_back('#');
			mundo.push_back('2');
			mundo.push_back(' ');
			mundo.push_back('?');
			mundo.push_back('#');

			mundo.push_back('#');
			mundo.push_back(' ');
			mundo.push_back(' ');
			mundo.push_back('?');
			mundo.push_back('#');

			mundo.push_back('#');
			mundo.push_back(' ');
			mundo.push_back(' ');
			mundo.push_back('1');
			mundo.push_back('#');

			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');

			World world = World(5, 5, mundo);
			Player player1 = world.getPlayer('1');
			Player player2 = world.getPlayer('2');
			GameLogic game = GameLogic(player1, player2, world);

			Assert::AreEqual(true, game.moveAllowed('2', 'r'));
		}
		TEST_METHOD(PlayerOneUp)
		{
			// TODO: Your test code here
			vector<char> mundo = vector<char>();
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');

			mundo.push_back('#');
			mundo.push_back('2');
			mundo.push_back(' ');
			mundo.push_back('?');
			mundo.push_back('#');

			mundo.push_back('#');
			mundo.push_back(' ');
			mundo.push_back(' ');
			mundo.push_back('?');
			mundo.push_back('#');

			mundo.push_back('#');
			mundo.push_back(' ');
			mundo.push_back(' ');
			mundo.push_back('1');
			mundo.push_back('#');

			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');

			World world = World(5, 5, mundo);
			Player player1 = world.getPlayer('1');
			Player player2 = world.getPlayer('2');
			GameLogic game = GameLogic(player1, player2, world);

			Assert::AreEqual(true, game.moveAllowed('1', 'u'));
		}
		TEST_METHOD(PlayerOneLeft)
		{
			// TODO: Your test code here
			vector<char> mundo = vector<char>();
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');

			mundo.push_back('#');
			mundo.push_back('2');
			mundo.push_back(' ');
			mundo.push_back('?');
			mundo.push_back('#');

			mundo.push_back('#');
			mundo.push_back(' ');
			mundo.push_back(' ');
			mundo.push_back('?');
			mundo.push_back('#');

			mundo.push_back('#');
			mundo.push_back(' ');
			mundo.push_back(' ');
			mundo.push_back('1');
			mundo.push_back('#');

			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');

			World world = World(5, 5, mundo);
			Player player1 = world.getPlayer('1');
			Player player2 = world.getPlayer('2');
			GameLogic game = GameLogic(player1, player2, world);

			Assert::AreEqual(true, game.moveAllowed('1', 'l'));
		}
		TEST_METHOD(PlayerOneDown)
		{
			// TODO: Your test code here
			vector<char> mundo = vector<char>();
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');

			mundo.push_back('#');
			mundo.push_back('2');
			mundo.push_back(' ');
			mundo.push_back('?');
			mundo.push_back('#');

			mundo.push_back('#');
			mundo.push_back(' ');
			mundo.push_back(' ');
			mundo.push_back('?');
			mundo.push_back('#');

			mundo.push_back('#');
			mundo.push_back(' ');
			mundo.push_back(' ');
			mundo.push_back('1');
			mundo.push_back('#');

			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');

			World world = World(5, 5, mundo);
			Player player1 = world.getPlayer('1');
			Player player2 = world.getPlayer('2');
			GameLogic game = GameLogic(player1, player2, world);

			Assert::AreEqual(false, game.moveAllowed('1', 'd'));
		}
		TEST_METHOD(PlayerOneRight)
		{
			// TODO: Your test code here
			vector<char> mundo = vector<char>();
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');

			mundo.push_back('#');
			mundo.push_back('2');
			mundo.push_back(' ');
			mundo.push_back('?');
			mundo.push_back('#');

			mundo.push_back('#');
			mundo.push_back(' ');
			mundo.push_back(' ');
			mundo.push_back('?');
			mundo.push_back('#');

			mundo.push_back('#');
			mundo.push_back(' ');
			mundo.push_back(' ');
			mundo.push_back('1');
			mundo.push_back('#');

			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');

			World world = World(5, 5, mundo);
			Player player1 = world.getPlayer('1');
			Player player2 = world.getPlayer('2');
			GameLogic game = GameLogic(player1, player2, world);

			Assert::AreEqual(false, game.moveAllowed('1', 'r'));
		}
		TEST_METHOD(WorldGetCell)
		{
			// TODO: Your test code here
			vector<char> mundo = vector<char>();
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');

			mundo.push_back('#');
			mundo.push_back('2');
			mundo.push_back(' ');
			mundo.push_back('?');
			mundo.push_back('#');

			mundo.push_back('#');
			mundo.push_back(' ');
			mundo.push_back(' ');
			mundo.push_back('?');
			mundo.push_back('#');

			mundo.push_back('#');
			mundo.push_back(' ');
			mundo.push_back(' ');
			mundo.push_back('1');
			mundo.push_back('#');

			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');
			mundo.push_back('#');

			World world = World(5, 5, mundo);
			Player player1 = world.getPlayer('1');
			Player player2 = world.getPlayer('2');
			GameLogic game = GameLogic(player1, player2, world);

			Assert::AreEqual('#', game.getWorld().getCell(0, 0));
		}
	};
}