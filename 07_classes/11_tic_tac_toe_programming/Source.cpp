/*
 * I would like you to create a game called TicTacToe.
 * In this version of the game we will need to:
 *		- Create a 4x4 game board;
 *		- Prompt the first user (the 'x' user) to enter their name, prompt the second user
 *		  (the 'o' user) to enter their name;
 *		- Prompt the 'x' user to select a grid position where they would like to place an 'x'.
 *		  Prompt the 'o' user to select a grid position where they would like to place an 'o'.
 *		- After each user has a turn, check for any row, column, diagonal that has 4 'x's or 4 'o's.
 *		- If 4 'x's are found in the same col, row, diagonal, declare the 'x' user the winner.
 *		  If 4 'o's are found in the same col, row, diagonal, declare the 'o' user the winner.
 *		- End the game and declare the winner.
 *		- If the grid is filled (each player gets 8 turns) and there is not a row, column,
 *		  diagonal with 4 of the same symbol, the game is tied. Declare a tie game.
 */

#include "TicTacToeFunctions.cpp"

int main()
{
	Game game;
	std::string nameX;
	std::string nameO;

	//game.printBoard();
	getUserNames(nameX, nameO);
	game.printBoard();

	while(!game.endGame())
	{
		// 'x' player turn
		printUserPrompt(nameX, 'x');
		checkResponse(game, 'x');
		game.printBoard();
		auto result = game.whoIsWinner();
		if(result == "x")
			break;

		// 'o' player turn
		printUserPrompt(nameX, 'o');
		checkResponse(game, 'o');
		game.printBoard();
		result = game.whoIsWinner();
		if (result == "o")
			break;
	}
	game.printBoard();
 	std::cout << "The winner is: " << game.whoIsWinner() << std::endl;


	return 0;
}
