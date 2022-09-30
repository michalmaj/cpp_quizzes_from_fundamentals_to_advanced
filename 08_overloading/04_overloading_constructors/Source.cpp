/*
 * We saw in the Classes lesson that we can have two kinds of constructors:
 *  - those that do not have input parameters;
 *  - those that do have them.
 */

#include "main.hpp"

int main()
{
    Square s1;
    Square s2(4, 3);
    cout << "s1 dimensions are: " << s1.getWidth() << "," << s1.getLength();
    cout << "\ns2 dimensions are: " << s2.getWidth() << "," << s2.getLength();
    return 0;
}