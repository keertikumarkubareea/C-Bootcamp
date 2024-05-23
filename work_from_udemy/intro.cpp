#include <iostream>

/*
    Program that asks the user to input their favorite number 
    between 1-100
    If input == 24, then acknowledge that this is our favourite number too
    Repeat
*/

int main()
{
    int number;
    while (true)
    {
        std::cout << "What is your favourite number? Number: ";
        std::cin >> number;
        std::cout << "Amazing!! That's my favorite number too!" << std::endl;
        std::cout << "No really!! " << number << " is my favorite number too!" << std::endl;
    }
    
    return 0;
}
