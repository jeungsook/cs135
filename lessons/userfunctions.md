---
layout: pages
title:  "User-defined Functions"
permalink: /lessons/userfunctions/
---

## User-defined functions

### Overview:

There are two different kinds of user-defined functions: value-returning functions and void functions.
There are also two ways of passing arguments, pass-by-value and pass-by-reference.

In this lesson I will cover:
- Both types of functions
- Both passing methods
- Scope

### Value Returning Functions

The only difference between a value returning function and a void function is that a value returning function must return a value and a void function must not return anything.

It's typical programming practice to place what is called a **function prototype** above your main function and the **function definition** below the main function.

Just like you have to declare a variable *before* you use it, you must have a function prototype before you call that function in main or another function.

Here is an example program which uses a value-returning function (the bare bones of the pow function from my return value lesson):

```c++
#include <iostream>

using namespace std;

double pow(double, int); // <--- function prototype

int main() {

  int num, power;
  double answer;

  cout << "Enter the number and the power you want to raise it to: ";
  cin >> num >> power;

  answer = pow(num,power); // <--- function call

  cout << num << " to the " << power << " power is: " << answer << endl;

  return 0;
}

// function definition 
double pow(double x, int y) {

  double answer;

  /*
  Main pow function code here
  */
  
  return answer;

}
```
