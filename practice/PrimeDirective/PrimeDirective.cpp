//##############################################################//
//			Prime Directive				//
//	Enter a number, and this program will tell		//
//			you if it's prime or not		//
//##############################################################//

// Jeung-Sook Williams jeung-sook.williams@unlv.edu

#include <iostream> // cout, cin

int main() {
  
	// Variables
	int num;
	int den = 2;
	//

	// Read the number
	std::cout << "Input a number: ";
	std::cin >> num;
	//
 
	// If the number is less than 2, it can't be prime
	if (num < 2)
		std::cout << num << " is not a prime number." << std::endl;

	// If the number is 2, it is prime
    else if (num == 2)
		std::cout << "2 is a prime number." << std::endl;

	// Divide the increasing variable den until den = num
    else {   

		while (den < num) {
	
			// A number other than num and 1 divides evenly into num, it is not prime
			if (num % den == 0) {
				std::cout << num << " is not a prime number." << std::endl;
				den = num;
			}

			else {

				den++;
				
				// No number other than num and 1 divides evenly into num, it is prime
				if (den == num)
      				std::cout << num << " is a prime number." << std::endl;

			}

        }
    }

 return 0;

}
