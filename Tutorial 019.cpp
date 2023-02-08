// Tutorial 019.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// Prime numbers example 

int main()
{
    std::cout << "Enter a number between 1 and 9: ";
    int x{};
    std::cin >> x; 

    if (x == 2 || x == 3 || x == 5 || x == 7)
        std::cout << x << " is a prime number ";
    if (x == 1 || x == 4 || x == 6 || x == 8 || x == 9 )
        std::cout << x << " isn't a prime number "; 
    if (x > 9)
        std::cout << x << " is out of bounds. "; 

    return 0; 

}

