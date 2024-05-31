#include <iostream>
#include <string>

using namespace std;

string caesar_encrypt(string message, int key){
	string ciphertext{};
	for (int code: message){
		code += key;
		// Translate the new ASCII code to the corresponding character
		ciphertext += char(code);
	}
	return ciphertext;
}

string caesar_decrypt(string cipher, int key){
	string message{};
	for (int code: cipher){
		code -= key;
		// Translate the new ASCII code to the corresponding character
		message += char(code);
	}
	return message;

}

int main(){
	cout << "Welcome to the message centre . . . " << endl;
	string message{};
	int key{0};
	cout << "What is your message?: ";
	getline(cin, message);
	cout << "Insert your key value: ";
	cin >> key;
	string ciphertext = caesar_encrypt(message, key);
	cout << "Your encrypted text is: " << ciphertext << endl;
	
	cout << "Decrypting . . ." << endl;
	cout << "We have a cipher text." <<  endl;
	cout << "Enter the same key used for encryption: ";
	cin >> key;
	string original {caesar_decrypt(ciphertext, key)};
	cout << "The recovered original message: " << original << endl;
	return 0;
}