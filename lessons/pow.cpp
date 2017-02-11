#include <iostream>

double pow(double, int);

int main() {

	double num;
	int exp;

	std::cout << "Input a number: " << std::endl;
	std::cin >> num;
	std::cout << "Input an exponent: " << std::endl;
	std::cin >> exp;

	std::cout << "Result: " << pow(num, exp) << std::endl;

	return 0;
}

double pow(double x, int y) {

	double answer = x;

	if (y == 0)
		return 1.0;

	else if (y == 1)
		return answer;

	else {
	
		for (int i = 1; i < y; i++)
			answer *= x;

		return answer;
	}

}