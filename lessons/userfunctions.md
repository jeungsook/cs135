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

  /*
  Main pow function code here
  */

}
```

1. The function prototype. I changed function datatype from double to void and added another double (the answer variable we want to modify)
2. The function call. Now there is no need to "catch" the return value of pow (since there is none)
3. The function definition. Changed function datatype to void and added the answer argument. Removed answer declaration and return. Depending on the way you've coded your function, there may be other changes within the function definition that you need to make.

Now the program functions exactly as it did before.

However, in order for this function to work as intended, I needed to pass a variable by reference. Now I'll go over the difference between pass-by-value and pass-by-reference.

### Pass by value

When you pass a variable by value, when the program enters the function's scope it **copies** that variable's value. In the first example, the value of num is copied into x, and the value of power is copied into y when the function is called.

I created a lesson about allocating memory along with this one that you might want to read to understand this concept and the next
one better: [LINK](https://jeungsook.github.io/cs135/lessons/allocatingmemory/)

Say, I type in 4 for num and 2 for power. This is what would happen in the first example:
![ret1](https://raw.githubusercontent.com/jeungsook/cs135/master/images/function1.png)

After calculation, double answer will contain 16, and it will return that value to the main function.

Note that the double answer in main does not point to the same location as the double answer in pow. Therefore we have to assign
main's answer to the value that pow returns:

answer = pow(num, power);

Now let's look at the next example **WITHOUT** passing by reference.

![ret1](https://raw.githubusercontent.com/jeungsook/cs135/master/images/function2.png)

What a mess. Pow will copy the value of answer (which at this point is just garbage data). Then, pow will calculate the correct answer within its scope however, void functions do not return anything, so when the main function goes to cout the answer, it will cout its own answer variable, which still contains garbage.

Now let's look at what the correct pow function does.

![ret1](https://raw.githubusercontent.com/jeungsook/cs135/master/images/function3.png)

Now, main will pass answer by reference, which means that instead of sending pow the value of the variable, main will send the address of the variable (its memory location) instead. Pow, when it makes any changes to answer, will be editing the memory location of the variable answer itself. Thus, when main goes to cout answer, it will print the correct value.

Again, please read the lesson on allocating memory if you haven't already if this confuses you.

The ampersand (&) symbol is called the address-of operator in C++. Basically, you can use it to grab a variable's address rather than it's value.

Ex:

```c++
int* ptr;
ptr = &num;
```

Now ptr holds the address of num. Like I said, you will cover pointers in much more depth in CS202 but this might help you understand why you write double& answer (or double &answer, spaces do not matter) in order to grab the address of answer and why when you modify answer now, it will change answer in int main as well despite the fact that they do not share the same scope.

### Scope

So I've been talking about scope throughout this lesson (which really is more like 3 lessons in one) so I will wrap up with what scope actually is.

Basically, the whole reason we have to pass arguments to functions to begin with is due to scope. In our examples, we could not read num and power nor could we write to answer directly.

For example, had num, power, and answer been global variables, you would not have had to pass void pow anything. But, if you do that, your professors will be mad at you and the fabric of time and space will collapse, so don't.

Anything within these curly bracets you've been using '{ }' have their own scope. The rule is, a scope nested within another scope (an inner scope) can "see" the variables of the outer scope, but not the other way around. Scopes that are on the same level cannot see each other's variables.

Ex:

```c++

const int A;

int main() {

  int B;

  if (this happens) {
    int C;

    // HEY! I can see A and B from here!

  }

  for (int i = 0; i < A; i++) {

   // Yeah, I can see A and B, what of it?
   // C? What's a C?
   
    for (int k = 1; k < B; k++) {
      // Yo, I can see A and B even from in here, cool!
      // I can see i too!
      // Nope, C is still a no-go.
    }

  }

  // 'Sup, main here. Yep, I can see A! What? Ofcourse I can see B, it's my own local variable.
  // No i can't C, k! *Gufaw, gufaw, gufaw!* That was a good one (I can't see i, C, or k)

}

void function() {
  // Guys, invite me to the party too! I can't see anything other than A.   ._.
}
```

Well, that wraps up this lesson. As always, let me know if you have any questions.
