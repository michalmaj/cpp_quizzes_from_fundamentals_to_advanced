#pragma once


#include <iostream>
#include <iomanip> 


class Gameboard
{
    char gameSpace[4][4];
public:
    Gameboard(); //initialize the board with '-' in all 16 spaces
    void setGameSpace(int row, int column, char value); //x,y,or '-' in each game square
    char getGameSpace(int row, int column);
    int fourInRow(); //four 'x's in any row 'wins'
    void printInfo(); //print the game board in a 4x4 matrix
};

//TODO: complete the class definition
Gameboard::Gameboard()
{
	for(int row{0}; row < 4; ++row)
	{
		for(int column{0}; column < 4; ++column)
		{
			gameSpace[row][column] = '-';
		}
	}
}

void Gameboard::setGameSpace(int row, int column, char value)
{
	gameSpace[row][column] = value;
}

char Gameboard::getGameSpace(int row, int column)
{
	return gameSpace[row][column];
}

int Gameboard::fourInRow()
{
	for (int row{ 0 }; row < 4; ++row)
	{
		int sum{ 0 };
		for (int column{ 0 }; column < 4; ++column)
		{
			if (gameSpace[row][column] == 'x')
				sum++;
		}
		if (sum == 4)
			return 1;
	}
	return 0;
}

void Gameboard::printInfo()
{
	for (int row{ 0 }; row < 4; ++row)
	{
		for (int column{ 0 }; column < 4; ++column)
		{
			std::cout << gameSpace[row][column] << " ";
		}
		std::cout << std::endl;
	}
}



