#include <cctype>
#include <cstring>
#include <iostream>

using namespace std;

int main(){
	char name[50]{}; // curly braces to ensure all characters in the list is initialized to null char
	char temp[50]{};
	
	cout << "Please enter your name: ";
	cin >> name;
	
	cout << "The input name is " << name << endl;
	cout << "Size = " << strlen(name) << endl;
	
	strcpy(temp, name);
	cout << "Copying name into temp . . . " << endl;
	if (strcmp(temp, name) == 0){
		cout << "They are the same!" << endl; // Here it is printed that they are the same
	} else {
		cout << "They are NOT the same!" << endl;
	}
	
	// capitalizing all names
	// size_t is a better way than int
	for(size_t i {0}; i < strlen(name); i ++){
		// is alpha is from cctype and checks if a character is an alphabet
		if (isalpha(name[i])){
			name[i] = toupper(name[i]); // Capitalizing all alphabets
		}
	}
	cout << "After capitalization, name is " << name << endl;
	cout << "Size = " << strlen(name) << endl;
	
	if (strcmp(temp, name) == 0){
		cout << "temp and name are the same!" << endl;
	} else {
		cout << "temp and name are NOT the same!" << endl; // Here, they are no longer the same!
	}

	
	return 0;
}