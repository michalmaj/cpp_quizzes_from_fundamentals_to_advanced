#include "TicTacToe.h"

inline void getUserNames(std::string&, std::string&);
inline void printUserPrompt(std::string, char);
inline void checkResponse(Game&, char);



inline void getUserNames(std::string& userX, std::string& userY)
{   //get the user names
    std::cout << "Name of user to be 'x' :";
    std::cin >> userX;
    std::cout << "Name of user to be 'o' :";
    std::cin >> userY;
}

inline void printUserPrompt(std::string nameIn, char letter)
{   //prompt for user input
    std::cout << nameIn << " where would you like to place an " << letter << "?: ";
    std::cout << "\n\n";
    std::cout << " where would you like to place an " << letter << "?: ";
}

inline void checkResponse(Game& game, char input)
{
    int x, y;
	std::cout << "Enter (x, y) position: ";
    std::cin >> x >> y;
    game.setPosition(x, y, input);
}