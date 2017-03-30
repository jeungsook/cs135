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

The only difference between a value returning function and a void function is that a value returning function must return a value and a void function should not return anything.

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

Take some time to study the example. I left out the actual code portion of the pow function because I wanted to focus on the form and usage of the function rather than how its implemented.

After you've written your function, you must make a **function call** in your main function or another function to utilize your function.

You must remember that value-returning functions return a value and you need to either store or use that value somehow.

Ex:

```c++
answer = pow(num,power);
OR
if (pow(num,power) > 10000) {...}
```

Basically, value returning functions are not unlike the functions you're familiar with in math.
```
          intput(s) (aka arguments)
             |
             |
             v
[function(input(s))] ---> output
```

### Void Functions

Void functions take inputs as well, but they do not return anything. They work instead by modifying the variables you pass to them and/or global variables (please avoid using global variables other than constants), calling functions, etc...

I could turn the pow function I used in the previous example into a void function with some modifications, but that function makes the more sense as a value-returning function.
