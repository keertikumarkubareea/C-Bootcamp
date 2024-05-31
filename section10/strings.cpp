/*
Section 10 - Characters and Strings
Notes:
Strings - sequences of characters
Characters can be defined as numerical values as each character set is mapped to an integer
- ASCII character set
In C++, we have 2 types of strings:
1. C-style strings
2. C++ Strings
*/
#include <iostream>
#include <iomanip>
using namespace std;

// Looking C-style strings first
#include <cctype>
// Contains functions for testing characters
// Functions for converting character case (upper/lower)
// Some of the functions being used below:
// * Assertion: isalpha(c), isalnum(c), isdigit(c), islower(c)
// * Conversion: tolower(c), toupper(c)

#include <cstring>
/*
includes functions to deal with c-style strings
See examples of strcpy, strcat, strlen, and strcmp below
*/
int main(){
	char lower_al {'a'};
	char upper_al {'A'};
	int num {2};

	cout << isalpha(lower_al) << endl; // 1 is printed to represent True
	cout << isalpha(num) << endl; // 0 is printed for False
	
	/*
	C-Style strings are sequences of characters stored contiguously in memory. 
	They are implemented as an array of characters (can be indexed)
	They are all terminated by the null character (null)
	null - character with a value of 0
	These strings are called zero or null-terminated strings
	How C-style strings are stored in memory:
	"C++ is fun" - C-style string (10 chars)
	C,+,+, ,i,s, ,f,u,n,\0 - how it is stored with the null character
	(11 chars is required because space is needed for the null character at the end)
	
	*/
	char garbage[20]; // this is uninitialized - will likely print garbage
	cout << "Uninitialized string: " << garbage << endl;
	
	char str[80]{}; // initializes an array of characters - size 80 - all initialized to null
	// Remember C-style strings are sequences of characters stored contiguously in memory.
	cout << "Length of string: " << strlen(str) << endl;
	strcpy(str, "Hello "); // copy
	cout << "After copy with Hello: " << str << endl; // 'Hello ' is printed on the terminal output
	strcat(str, "World!"); // concatenation
	cout << "After concat with World!: " << str << endl; // Hello World! is printed
	cout << "Total length = " << strlen(str) << endl;
	// Comparing 2 strings - if strings are equal, 0 is returned
	cout << "Comparing with 'Another': " << strcmp(str, "Another") << endl; // expected non-zero
	cout << "Comparing with 'Hello World!': " << strcmp(str, "Hello World!") << endl; // expected zero
	
	

	return 0;
}

