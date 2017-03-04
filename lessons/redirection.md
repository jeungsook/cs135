---
layout: pages
title:  "Linux Redirection"
permalink: /lessons/redirection/
---

## Linux Redirection

### How does Linux Redirection work?

Cin is the standard input stream. It retrieves data from an external source. In previous exercises, that source was the keyboard.

However, Exercise 7 asks you to use Linux Redirection.
Basically, you put your input into a file and have your program retrieve the data from that file.

Ex:

./a.out < file.txt

./program_name.o < file

### How do you use it though?

Not that different from how you use keyboard input.

Here, I want you to create a file right now that has the following three numbers in it, separated by spaces:

2 12 16

Then, I want you to use Linux redirection with this file and your Exercise 6 (recompile it first if you have to).

You should get the following two x values for your roots:

x1 = -2.000
x2 = -4.000

Cin retrieves numbers, strings, and characters up to either a space or newline character.

A file with:

2 <br>
12 <br>
16 <br>

Will also work fine with your Exercise 6.

You will need 3 cin statements to read in these three numbers, just like keyboard input.

I hope this clears things up but let me know if you have any more questions!
