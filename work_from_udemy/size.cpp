#include <iostream>
#include <climits> //contains constants to know the min and max values of integers and chars. <cfloats> are for floats
using namespace std;


//using sizeof operator to find the size of a variable or type in bytes - not bits
int main(){

    cout << "All sizes are in bytes" << endl;
    cout << "Size of int: " << sizeof(int) << endl;
    cout << "Size of long: " << sizeof(long) << endl;
    cout << "Size of short: " << sizeof(short) << endl;
    cout << "Size of boolean: " << sizeof(bool) << endl;
    cout << "Size of char: " << sizeof(char) << endl;
    cout << "Size of char16_t: " << sizeof(char16_t) << endl;

    cout << "Minimum Values" << endl;
    cout << "char: " << CHAR_MIN << endl;
    cout << "int: " << INT_MIN << endl;
    cout << "long: " << LONG_MIN << endl; 
    //SAME can be done for max: LONG_MAX



    return 0;
}