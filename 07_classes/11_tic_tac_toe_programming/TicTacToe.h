#pragma once

#include <iostream>
#include <format>
#include <string>

class Game
{
	char board[4][4]{};
	std::string player_name;
	char winner;
	bool is_end;
	int moves;
	char checkRows();
	char checkCols();
	char checkDiagonals();
	char checkWinner();

public:
	Game();
	void setPosition(int w, int c, char player);
	void printBoard();
	std::string whoIsWinner();
	bool endGame();
	
};

inline Game::Game()
{
	is_end = false;
	moves = 0;
	winner = '-';
	for(int i{0}; i < 4; ++i)
	{
		for (int j{ 0 }; j < 4; ++j)
			board[i][j] = '-';
	}
}

inline void Game::setPosition(int r, int c, char player)
{
	while(true)
	{
		if (board[r][c] == '-')
		{
			board[r][c] = player;
			moves++;
			break;
		}

		std::cout << "This position is used!\n";
		std::cout << "Enter new row and column: ";
		std::cin >> r >> c;
	}
}

inline void Game::printBoard()
{
	for(int i{0}; i < 4; ++i)
	{
		for(int j{0}; j < 4; ++j)
		{
			std::cout << "" << board[i][j] << "";
		}
		std::cout << std::endl;
	}
}

inline char Game::checkRows()
{
	int fourInRowX{ 0 };
	int fourInRowO{ 0 };
	for (int i{ 0 }; i < 4; ++i)
	{
		fourInRowX = 0;
		fourInRowO = 0;
		for (int j{ 0 }; j < 4; ++j)
		{
			if(board[i][j] == '-')
				break;
			if (board[i][j] == 'x')
				fourInRowX++;
			if (board[i][j] == 'o')
				fourInRowO++;
		}
		if (fourInRowX == 4)
		{
			winner = 'x';
			return 'x';
		}

		if (fourInRowO == 4)
		{
			winner = 'o';
			return 'o';
		}
	}



	return '-';
}

inline char Game::checkCols()
{
	int fourInColX{ 0 };
	int fourInColO{ 0 };
	for (int j{ 0 }; j < 4; ++j)
	{
		fourInColX = 0;
		fourInColO = 0;
		for (int i{ 0 }; i < 4; ++i)
		{
			if (board[i][j] == '-')
				break;
			if (board[i][j] == 'x')
				fourInColX++;
			if (board[i][j] == 'o')
				fourInColO++;
		}
		if (fourInColX == 4)
		{
			winner = 'x';
			return 'x';
		}

		if (fourInColO == 4)
		{
			winner = 'o';
			return 'o';
		}

	}


	return '-';
}

inline char Game::checkDiagonals()
{
	int fourInDiagX{ 0 };
	int fourInDiagO{ 0 };
	int i{ 0 }, j{ 0 };
	while(i < 4 and j < 4)
	{
		if (board[i][j] == '-')
			break;
		if (board[i][j] == 'x')
			fourInDiagX++;
		if (board[i][j] == 'o')
			fourInDiagO++;
		++i;
		++j;
	}

	if(fourInDiagX != 4 and fourInDiagO != 4)
	{
		fourInDiagX = 0;
		fourInDiagO = 0;
		i = 0;
		j = 3;

		while (i < 4 and j >= 0)
		{
			if (board[i][j] == '-')
				break;
			if (board[i][j] == 'x')
				fourInDiagX++;
			if (board[i][j] == 'o')
				fourInDiagO++;
			++i;
			--j;
		}
	}

	if (fourInDiagX == 4)
	{
		winner = 'x';
		return 'x';
	}

	if (fourInDiagO == 4)
	{
		winner = 'o';
		return 'o';
	}

	return '-';
}


inline char Game::checkWinner()
{
	char winner{ '-' };
	winner = checkRows();
	if (winner == '-')
		winner = checkCols();
	if (winner == '-')
		winner = checkDiagonals();

	return winner;
}

inline std::string Game::whoIsWinner()
{
	char winner = checkWinner();
	for (int j{ 0 }; j < 4; ++j)
	{
		if(winner == 'x' or winner == 'o')
			break;
		for (int i{ 0 }; i < 4; ++i)
		{
			if (board[i][j] == '-')
				return "Game is still on\n";
		}
	}
	if (winner == 'x')
		return "x";
	else if (winner == 'o')
		return "o";
	else
		return "Tie";		
}

inline bool Game::endGame()
{
	return moves == 16;
}


