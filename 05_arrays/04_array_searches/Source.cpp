/*
 **Goal: practice searching an array in C++
 **There is an array of integers. The length of the arrays to be searched
 **varies. A user will enter an integer and the program will search the array.
 **If the value is in the array, the program will return the location of
 **the element. If the value is not in the array, the user will be notified
 **that the value is not in the array. To exit the program the user will enter -1.
 */

#include <iostream>
#include <algorithm>

int main()
{
    int searchArray[10] = { 324,4567,6789,5421345,7,65,8965,12,342,485 };
    //use searchKey for the number to be found
    //use location for the array index of the found value
    int searchKey, location{-1};

    while(true)
    {
	    std::cout << "Enter value to find in an array (type -1 to quit): ";
    	std::cin >> searchKey;
        if(searchKey == -1)
            break;

    	//TODO: write code to determine if integers entered by 
    	//the user are in searchArray
    	for(int i{0}; i < std::size(searchArray); ++i)
    	{
    		if (searchArray[i] == searchKey)
    		{
    			location = i;
                break;
    		}
    	}

        //// We can also use a STL (std::find) - comment loop above and uncomment below
        //// code to use STL instead of for loop
        //auto it = std::find(std::begin(searchArray), std::end(searchArray), searchKey);

        //if (it != std::end(searchArray))
        //    location = (it - std::begin(searchArray));

    	//Use these commands to give feedback to the user
    	if (location != -1)
    	{
    		std::cout << searchKey << " is at location " << location << " in the array.\n";
    	}
    	else
    	{
    		std::cout << searchKey << " is not in the array.\n";
    	}
    }

    return 0;
}
