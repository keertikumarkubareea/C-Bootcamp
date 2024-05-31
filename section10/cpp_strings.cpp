/*
* std::string - class in the Standard Template Library - STL
* std namespace
* contiguous in memory (like C-style strings)
* dynamic size (unlike C-style strings)
* work with input and output streams
* lots of useful member functions
* operators can be used: +, =, <, <=, >, >=, +=, ==, !=, []
* easily converted to C-style strings if needed
* safer to operate on

*/
#include <string>
#include <iostream>
using namespace std;

int main(){
	// Declaring and initializing
	string s1; //Empty
	string s2{"Frank"}; // Frank
	string s3{s2}; // Frank // although the same value, s2 and s3 are in different areas of memory
	string s4{"Frank", 3}; // Fra // using only first 3 characters
	string s5{s3, 0, 2}; // Fr // first int is the starting index, second int is the desired length
	string s6 (3, 'X'); //XXX
	
	// Assignment operator can be used on C++ strings
	// Remember for C-style - strcpy and strcmp from cstring library
	string s7;
	s7 = "Hello World!";
	cout << "String 7 is saying: " << s7 << endl;
	string s8 {"Bye!"};
	cout << "String 8 is saying: " << s8 << endl;
	s8 = s7; // Copying s7 into s8 - still 2 different spots in memory
	cout << "Now, string 8 is saying: " << s8 << endl;
	
	// C++ Strings concatenation
	string part1 {"C++"};
	cout << "Part 1 says: " << part1 << endl;
	string part2 {"is powerful"};
	cout << "Part 2 says: " << part2 << endl;
	string sentence;
	sentence = part1 + " " + part2;
	cout << "Concatenated sentence: " << sentence << endl;
	/*
	Note:
	This will NOT compile
	sentence = "C++ " + "is powerful";
	because we cannot concatenate 2 C-style literals using the + operator. ONLY C++ STRINGS
	string part1 {"C++"}; - this converts the C-style literal to C++ string
	*/
	
	// Accessing characters with [index] or .at(index)
	string name {"Vivek"};
	cout << "Name: " << name << endl;
	cout << "First letter of name: " << name[0] << endl;
	cout << "Last letter of name: " << name.at(4) << endl;
	
	// Looping through each character in the C++ string
	for (char c: name){
		cout << c << endl;
	}
	
	// To display ASCII code of each character
	string latin {"ABCDabcd"};
	for (int code: latin){
		cout << code << endl;
	}
	
	// Comparison - ==, !=, <, <=, >, >=
	/*
	The objects are compared character by character lexically
	can compare:
		two std::string objects
		std::string object and C-style string literal
		std::string object and C-style string variable
	*/
	
	// substring method
	// object.substr(start_index, length);
	
	string complete_sentence {"This is a sentence"};	
	string word0 {complete_sentence.substr(0, 4)}; // This
	cout << "The first word is: " << word0 << endl;
	string word1 {complete_sentence.substr(5, 2)};
	cout << "The second word is: " << word1 << endl;
	string word2 {complete_sentence.substr(8, 1)};
	cout << "The third word is: " << word2 << endl;
	string word3 {complete_sentence.substr(10, 8)};
	cout << "The final word is: " << word3 << endl;
	
	// Find method - returns the starting index of the substring in std::string
	// object.find(search_string)
	string test {"This is a test!"};
	cout << test.find("This") << endl; // 0
	cout << test.find("is") << endl; // 2
	cout << test.find("test") << endl; // 10
	cout << test.find("e") << endl; // 11
	cout << test.find("is", 4) << endl; // 5 // find "is" starting at index 4
	cout << test.find("XX") << endl; // string::npos
	
	// Removing characters
	// object.erase(starting_index, length);
	string rm {"Try to remove items from this string"};
	cout << "The sentence is: " << rm << endl;
	cout << rm.erase(0, 4) << endl; // Try and the space are removed
	rm.clear(); // empties the string rm
	
	// length method
	string pirate {"Edward"};
	cout << "The pirate's name is " << pirate << " and it has " << pirate.length()
	 << " characters." << endl;
	pirate += " James";
	pirate += " Kenway";
	cout << "His full name is " << pirate << endl;
	
	// inputs, cin and getline
	string input;
//  cout << "cin >>: ";
// 	cin >> input; // Hello there - only Hello is counted as whitespace is seen
// 	cout << input << endl; // Hello
	
	cout << "getline(cin, input_variable): ";
	getline(cin, input); // Reads entire line until \n // hello there
	cout << input << endl; // hello there
	
	/*
	another variant of getline
	getline(cin, variable, delimiter)
	delimiter - stops reading when the delimiting character is found
	*/
	
	return 0;
}