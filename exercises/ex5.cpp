#include <iostream>
#include <iomanip>
#include <cmath>

int main () {

  std::cout << std::setprecision(1) << std::fixed << std::endl;

	/// PART 1 ///
	std::cout << "1. " << 25 % 8 - 9 / 2 << std::endl;
	std::cout << "2. " << 7 + 21 % 15 - pow(2, 3) << std::endl;
	std::cout << "3. " << 9 / 4 * 6 + int(4.7) << std::endl;
	std::cout << "4. " << 4 * (2.0 / 5) - 2 << std::endl;
	std::cout << "5. " << 101 / (5 % 7) - 3 * 2.0 << std::endl;

	/// PART 2 ///

	int x, y, z;
	double a, b;
	x = 19;
	y = 3;
	a = 8.4;

	z = 3 + x % 6;
	std::cout << "6. " << z << std::endl;
	b = int(sqrt(x + 9)) + y * 2;
	std::cout << "7. " << b << std::endl;
	b = y / 2 + 9.1;
	std::cout << "8. " << b << std::endl;
	z = a - x % y + (x - 10) * 0.5;
	std::cout << "9. " << z << std::endl;
	z = double(y / x + 1) - a;
	std::cout << "10. " << z << std::endl;

	return 0;
}
