---
layout: pages
title:  "Integer Division"
permalink: /lessons/intdivision/
---

## Division

### Problem

This is a topic that I'm still getting questions on so I'll create a lesson for it as a reminder.

The division operator " / " is, unless specified, created to operate on two integers and return an integer.

```c++

std::cout << 15/2 << std::endl;

```

Will print 7, **not 7.5**!

This is why, in Exercise 4, if you typed 1/2 * m * pow(v, 2), your kinetic energy would equal 0.

1/2 = 0.5 but with the integer operator " / ", the answer would be returned as an integer, 0.

### Fixes

There are a few ways to fix this problem:

```c++
#include <iostream>
#include <cmath>

int main() {

  // No conversion
  std::cout << std::endl;
  std::cout << "No conversion: " << std::endl;
  std::cout << "15/2:  " << 15/2 << std::endl;
  std::cout << std::endl;

  // Simply adding a decimal
  std::cout << "Simply adding a decimal: " << std::endl;
  std::cout << "15.0/2:  " << 15.0/2 << std::endl; 
  std::cout << "15/2.0:  " << 15/2.0 << std::endl; 
  std::cout << std::endl;

  // Using C style cast
  std::cout << "Using C style cast: " << std::endl;
  std::cout << "(double)15/2:  " << (double)15/2 << std::endl;
  std::cout << "15/double(2):  " << 15/double(2) << std::endl;  
  std::cout << std::endl;

  // Using C++ static_cast
  std::cout << "Using C++ static_cast: " << std::endl;
  std::cout << "static_cast<double>(15)/2:  " << static_cast<double>(15)/2 <<std::endl;
  std::cout << "15/static_cast<float>(2):  " << 15/static_cast<double>(2) <<std::endl;
  std::cout << std::endl;

  return 0;
}
```

Output:

```
No conversion: 
15/2:  7

Simply adding a decimal: 
15.0/2:  7.5
15/2.0:  7.5

Using C style cast: 
(double)15/2:  7.5
15/double(2):  7.5

Using C++ static_cast: 
static_cast<double>(15)/2:  7.5
15/static_cast<float>(2):  7.5
```
