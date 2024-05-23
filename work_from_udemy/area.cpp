// Section title: Variables and constants

//for input and output functionality
#include <iostream>

//to avoid typing std::cout and use just cout
using namespace std;

int age; //global variable - always initialized to zero - print to see value

//this program will calculate the area of a room in metres square 
int main(){

    int width = 0; //local variables
    int length = 0;
    int area = 0;

    /*
    2 other ways to declare a variable:
    int x (0);
    int d {11}; //C++11 required for this one
    */

    cout << "Enter the width of the room (in metres): ";
    cin >> width;
    cout << "Enter the length of the room (in metres): ";
    cin >> length;

    area = length * width;

    cout << "Area of the room = " << area << endl;

    cout << "Age of person: " << age << endl;

    return 0;
}

