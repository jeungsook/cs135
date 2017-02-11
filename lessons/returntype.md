---
layout: pages
title:  "Return Type"
permalink: /lessons/returntype/
---

## Function Return Types

All functions have what we call a **return type**.

This is the data type of what a function returns.

![ret1](https://raw.githubusercontent.com/jeungsook/cs135/master/images/return_type1.jpg)

Here is a (very simple) pow function I wrote myself:

```c++
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
```
If you want to download a program containing this pow function and mess around with it:

Right-click & click save link as on the "Download .cpp" button if you want to download it, otherwise just click "See Code"

[<img src="https://dabuttonfactory.com/button.png?t=See+Code&f=Roboto&ts=24&tc=444&hp=20&vp=8&c=5&bgt=unicolored&bgc=9ddcff&be=1">](https://jeungsook.github.io/cs135/lessons/powfunctioncode.md/) [<img src="https://dabuttonfactory.com/button.png?t=Download+.cpp&f=Roboto&ts=24&tc=444&hp=20&vp=8&c=5&bgt=unicolored&bgc=9ddcff&be=1">]({{ site.url }}/cs135/lessons/pow.cpp)

### Notes about this function:

- If you want to actually test this function, you have to include what is called a function prototype before the int main function:

```c++
double pow(double, int);

int main() {
...
```
- Like I said, this function is very simple. It does not handle decimal exponents or negative exponents correctly. The pow function included in the cmath library is more robust.

## Final Comments

Functions can return many different types of data. String, bool, float, pointers, classes, etc...

Functions that don't return anything are called **void functions** (you'll learn about them later).
