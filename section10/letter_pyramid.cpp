#include <iostream>
#include <string>
using namespace std;

int main(){
	
	string sentence{};
	string display_per_loop{};
	cout << "Please enter your sentence for the letter pyramid(no space): ";
	cin >> sentence;
	size_t number_spaces{sentence.length() - 1};
	string spaces(number_spaces, ' ');
	
	for(int i{1}; i <= sentence.length(); i ++){
		display_per_loop = sentence.substr(0, i);
		for(int reversed{i - 2}; reversed >= 0; reversed --){
			display_per_loop += sentence.at(reversed);
		}
		cout << spaces + display_per_loop << endl;
		spaces.erase(0, 1);
	}

}