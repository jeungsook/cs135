---
layout: pages
title:  "Exercise 8"
permalink: /exercise8/
---

## Text File Processing

### Summary

Learn how to:

- Use conditional loops (while).

### Due
due by 11:59pm F̶r̶i̶,̶ ̶M̶a̶r̶ ̶1̶0̶  Sun, Mar 12

### Point Value
40

### Download the pdf instructions for this exercise: [Download](https://github.com/jeungsook/cs135/raw/master/exercises/pdf/CS%20135%20Spring%202017%20Exercise%20%238.pdf)

### Tips
- With all conditional loops, you have to make sure the loop eventually terminates or you'll have what's called an infinite loop

### Due Date Passed

Common mistakes:

There was really only one common mistake besides the usual forgetting to put your name, lec # , etc… as a comment or cout statement. That was how punctuation marks were handled.

If you read the instructions carefully, it states:

A data file for this exercise will consist of several lines of text that form sentences. The text may include letters, punctuation marks, and/or digits. Each sentence will be terminated with either a period (.), an exclamation mark (!), or a question mark (?).

The file can include punctuation marks such as commas and quotation marks in addition to the end punctuation marks. The sample output file just happened to not contain them but my (2nd) test file did.

Therefore, the use of ispunct to catch the end punctuation will not work, nor will using an else statement that does not take these punctuation marks into account.

Ex: (This is pseudo-code)

if (letter) { do this } else if ( end punct ) { do this } else { digits++ } < Will catch other punctuation marks

### Test Your Program

Here's one of the files I used to test your program:
[Download](https://raw.githubusercontent.com/jeungsook/cs135/master/exercises/5)

Expected Output:
```
Average # of letters per sentence is 22.300
Total # of digits in the file is 8
```
