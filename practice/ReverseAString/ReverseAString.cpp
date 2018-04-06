//##############################################################//
//			Reverse a String			//					
//		This program takes a string input,		//
//		reverses the characters, and outputs it		//
//##############################################################//

// Jeung-Sook Williams jeung-sook.williams@unlv.edu

#include <iostream> // cout, cin, cin.clear(), cin.ignore()
#include <string.h> // string, .length(), getline()
#include <limits.h> // INT_MAX

// Function definition of the reverse function
void reverse(std::string&);
//

int main() {

	// Variables
	std::string input;
	char exit = 'y';
	//

	// While loop that lets the user continue until they quit
	while(exit == 'y' || exit == 'Y') {

		// Read the string
		std::cout << "Input a string: ";
		getline(std::cin, input);
		//

		// Call function that reverses the string
		reverse(input);
		//

		// Print the reversed string out to the screen
		std::cout << "This is your string reversed: " << input << std::endl;
		//

		// Asks user if they want to continue
		std::cout << "Do you want to reverse another string? (y/n): ";
		std::cin >> exit;
		//

		// Clears cin buffer
		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');
		//
	}
	//
	
return 0;

}

// Function that reverses the string
void reverse(std::string& input) {

	char temp;

	// For loop that iterates through the whole string and
	// switches each character one by one
	for (int i = 0; i < input.length()/2; i++) {
		temp = input[i];
		input[i] = input[(input.length() - 1) - i];
		input[(input.length() - 1) - i] = temp;
	}
	//
}
//
