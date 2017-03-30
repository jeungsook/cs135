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

A few other things about functions you may have noticed (that also apply to void functions as well):
- A function prototype does not have to include argument names, just their types, however you can include names if you want to
- A function's argument's name does not have to remain the same from the "scope" from which it is called to the function's scope (more on scopes further down)
- The pow function I created takes a double argument and an int argument however, I passed it two ints. This is acceptable due to something called type coercion. Basically, ints are similar enough to doubles that C++ automatically converts your int argument to match. Ex: 4 becomes 4.0. Note, that the return type is also double, hence that sticky question on Exercise 5 that most of you got wrong. C++ does quite a few coercions betweem different types but don't worry if you don't understand that completely yet. You will learn more about type coercion in CS202.

### Void Functions

Void functions take inputs as well, but they do not return anything. Instead, they work by modifying the variables you pass to them and/or global variables (please avoid using global variables other than constants), calling functions, recieving input, or handling output, etc... 

Let's take that pow function from the previous example and convert it into a void function. The function definition is not the only thing we have to change ofcourse. I've put three asterisks in front of the lines I've changed.

```c++
#include <iostream>

using namespace std;
***void pow(double, double&, int); // <--- function prototype

int main() {

  int num, power;
  double answer;

  cout << "Enter the number and the power you want to raise it to: ";
  cin >> num >> power;

  ***pow(num,answer,power); // <--- function call

  cout << num << " to the " << power << " power is: " << answer << endl;

  return 0;
}

// function definition 
***void pow(double x, double& answer, int y) {

  double answer;

  /*
  Main pow function code here
  */

}
```

1. The function prototype. I changed function datatype from double to void and added another double (the answer variable we want to modify)
2. The function call. Now there is no need to "catch" the return value of pow (since there is none)
3. The function definition. Changed function datatype to void and added the answer argument. Removed return answer. Depending on the way you've coded your function, there may be other changes within the function definition that you need to make.
