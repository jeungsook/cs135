---
layout: pages
title:  "Exercise 8 Graded"
date:   2017-03-17
---

**03/17/2017**

Sorry for the delay guys, midterms and my senior design project kept me busy. 
I just finished grading Exercise 8. If you did not receive your grade, you know the drill.

Common mistakes:

There was really only one common mistake besides the usual forgetting to put your name, lec # , etc... as a comment or cout statement.
That was how punctuation marks were handled.

If you read the instructions carefully, it states:

A data file for this exercise will consist of several lines of text that form sentences. 
The text may include letters, **punctuation marks**, and/or digits. 
Each sentence will be **terminated with either a period (.), an exclamation mark (!), or a question mark (?).**

The file can include punctuation marks such as commas and quotation marks in addition to the end punctuation marks.
The sample output file just happened to not contain them but my (2nd) test file did.

Therefore, the use of ispunct to catch the end punctuation will not work, nor will using an else statement that does not take these
punctuation marks into account. 

Ex: (This is pseudo-code)

if (letter) { do this } 
else if ( end punct ) { do this }
else { digits++ } < Will catch other punctuation marks

Remember to read the directions carefully and have a great weekend!
