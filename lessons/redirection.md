---
layout: pages
title:  "Linux Redirection"
permalink: /lessons/redirection/
---

## Linux Redirection

### How does Linux Redirection work?

Cin is the standard input stream. It retrieves data from an external source. In previous exercises, that source was the keyboard.

However, some exercises will ask you to use Linux Redirection.
Basically, you put your input into a file and have your program retrieve the data from that file.

Ex:

./a.out < file.txt

./program_name.o < file

### How do you use it though?

Not that different from how you use keyboard input.

As an example, I want you to create take one of your previous exercises that took numbers entered into the keyboard as input and instead create a file with the numbers terminated with a line feed.

Then, I want you to use Linux redirection with the file you just created as input.

You should see the results of your program's computation as if you had entered the numbers yourself through the keyboard.

### Output Stream

Similarly, you can use Linux Redirection to redirect output.

Ex:

./a.out > file.txt

Now, instead of outputting text to the screen, cout statements in your program will output to the file provided. If the file does not exist, a file with that name will be created.

You can use both input and output redirection at the same time:

./a.out < inputfile.txt > outputfile.txt

I hope this clears things up but let me know if you have any more questions!
