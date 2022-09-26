#include "TicTacToeFunctions.cpp"

int main()
{
	Game game;
	std::string nameX;
	std::string nameO;

	//game.printBoard();
	getUserNames(nameX, nameO);

	while(!game.endGame())
	{
		game.printBoard();

		// 'x' player turn
		printUserPrompt(nameX, 'x');
		checkResponse(game, 'x');

		auto result = game.whoIsWinner();
		if(result == "x")
			break;

	//	// 'o' player turn
	//	printUserPrompt(nameX, 'o');
	//	checkResponse(game, 'o');

	//	result = game.whoIsWinner();
	//	if (result == "o")
	//		break;
	}
	game.printBoard();
 	std::cout << "The winner is: " << game.whoIsWinner() << std::endl;


	return 0;
}


/*game.setPosition(0, 0, 'o');
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
		game.printBoard();*/