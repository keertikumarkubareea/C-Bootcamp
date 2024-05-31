#include <cstring>
#include <iostream>
#include <cctype>
#include <iomanip>
#include <string>
using namespace std;

int main(){
	char first_name[20]{}; // all char arrays have size fixed and initialized to null characters
	char last_name[20]{};
	char full_name[50]{};
	char parent_full_name[50]{};
	
	// Asking for user input
	cout << "Please enter your first name: ";
	cin >> first_name; // cin changes to a new line already
	cout << "Please enter your last name: ";
	cin >> last_name;
	// strlen function
	cout << "Your first name " << first_name << " has " << strlen(first_name) << " characters!" << endl;
	cout << "Your last name " << last_name << " has " << strlen(last_name) << " characters!" << endl;
	//copy and concatenation
	strcpy(full_name, first_name); // copy first_name to full_name
	strcat(full_name, " "); // concatenate full_name and a space
	strcat(full_name, last_name); // concatenate full_name to last_name
	cout << "Your full name is " << full_name << endl;	
	
	// Reading in cin stops when a white space is detected
	// Specify the number of characters to read if you need to capture a white space
	cout << "Enter your mother's full name: ";
	cin >> parent_full_name; // Read 50 characters from input, including white space 
	//cin.getline() error - not prompting the user to give an input
	cout << "Your mother's full name is " << parent_full_name << endl;
	
	char temp[50]{};
	
	// copying mother's name into temp
	strcpy(temp, parent_full_name);
	cout << "Copying (strcpy) parent name into temp then comparing (strcmp) . . ." << endl;
	if (strcmp(temp, parent_full_name) == 0){
		cout << "They are the same!" << endl;
	} else {
		cout << "They are NOT the same!" << endl;
	}

	return 0;
}	