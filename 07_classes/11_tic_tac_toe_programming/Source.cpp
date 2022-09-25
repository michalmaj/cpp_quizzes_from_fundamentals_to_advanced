#include "TicTacToe.h"

int main()
{
	Game game;

	game.printBoard();

	game.setPosition(0, 0, 'o');
	game.printBoard();

	game.setPosition(0, 1, 'o');
	game.printBoard();

	game.setPosition(0, 2, 'o');
	game.printBoard();

	game.setPosition(0, 3, 'x');
	game.printBoard();



	game.setPosition(1, 0, 'x');
	game.printBoard();

	game.setPosition(1, 1, 'o');
	game.printBoard();

	game.setPosition(1, 2, 'o');
	game.printBoard();

	game.setPosition(1, 3, 'o');
	game.printBoard();



	game.setPosition(2, 0, 'x');
	game.printBoard();

	game.setPosition(2, 1, 'o');
	game.printBoard();

	game.setPosition(2, 2, 'x');
	game.printBoard();

	game.setPosition(2, 3, 'o');
	game.printBoard();



	game.setPosition(3, 0, 'x');
	game.printBoard();

	game.setPosition(3, 1, 'x');
	game.printBoard();

	game.setPosition(3, 2, 'x');
	game.printBoard();

	game.setPosition(3, 3, 'x');
	game.printBoard(); 






 	std::cout << game.whoIsWinner() << std::endl;


	return 0;
}
