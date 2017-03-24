//##############################################################//
//		            Prime Time	        			    //					
//                  Generates all of the primes up to a         //
//                          specified number                	//
//##############################################################//

// Jeung-Sook Williams jeung-sook.williams@unlv.edu

#include <iostream> // cout, cin
#include <cmath> // ceil, sqrt

// These two functions make the output pretty
void printSpaces(int, int);
int spaceDeterminer(int);
//

int main() {

    int n, row, nspace;

    std::cin >> n;

    nspace = spaceDeterminer(n);
    int arr[n+1];

    // Zero out array
    for (int i = 0; i < n+1; i++)
        arr[i] = 0;

    // For loop that marks composite numbers as not prime
    for (int i = 2; i <= std::ceil(std::sqrt(n)); i++) {
        if (arr[i] == 0) {
            for (int j = i; i * j <= n; j++) {
                arr[i*j] = -1;
            }
        }
    }

    row = 0;

    // For loop that prints out all of the prime numbers found
    for (int i = 2; i < n+1; i++) {
        if (arr[i] == 0) {
            std::cout << i << " ";
            printSpaces(i, nspace);
            row++;
        }
        if (row == 10) {
            row = 0;
            std::cout << std::endl;
        }
    }

    std::cout << std::endl;

return 0;
}

void printSpaces(int num, int nspace) {
    int space = spaceDeterminer(num);

    for (int i = 0; i < nspace-space; i++) {
        std::cout << " ";
    }
}

int spaceDeterminer(int num) {
    int count = 0;

    while (num > 0) {
        num = num / 10;
        count++;
    }

return count;
}
