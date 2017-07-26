---
layout: pages
title:  "Mastermind"
permalink: /mastermind/
---

## Summary 

Create a game called Mastermind! Mastermind is a simple, yet fun codebreaking game that requires you to use your head.
The goal of the game is to crack a secret code consisting of a row of four colored pegs (you can have two or more of the same color). 

The code may be chosen from these colors: Red (R), White (W), Yellow (Y), Green (G), Blue (Bu), and Black (Bk)

You start off by guessing the code. Each time the measure of how close your guess is to the real code is scored 
with white and black keys. 

A white key = you got a color right, but the position is wrong.
A black key = both the color and position is correct!

Notes:
Each peg in the code can only give you one key - white or black.
You cannot get two white keys for the same peg and you cannot get a white and a black key from the same peg - only black (black trumps white key).

Rule Ex:
  Code is:     Bu R Y Bu
  Your guess:  W Bu W Bu

  This guess will get you one black key and one white key.

You win the game when you figure out the code exactly (and recieve 4 black keys).

Example Run:

```
   
Enter guess: G Y R Bu
F F F F 
O O O O 
Enter guess: G Bu R Y
F F F F 
Ø Ø O O 
Enter guess: R Bu G Y
F F F F 
Ø Ø Ø Ø 

Code cracked! The secret code is: R Bu G Y 
It took you 3 guesses to break the code.

--------New Game--------

Enter guess: Bu Bu Bk W
F F F 
Ø Ø O 
Enter guess: Y W Bk W
F F 
Ø Ø 
Enter guess: W Bu R G
F F 
Ø O 
Enter guess: Y Bu Bk R
F F 
Ø Ø 
Enter guess: Y Bu Bu W
F F F F 
Ø Ø Ø Ø 

Code cracked! The secret code is: Y Bu Bu W 
It took you 5 guesses to break the code.

```
Notes: In my Mastermind program:

F
Ø   = Black Key

F
O   = White Key

You can set the code through the command line arguments:

```
$ ./mastermind.o R Bu G Y
```
You can type "showcode" instead of a guess to cheat.

```
$ ./mastermind.o
Enter guess: showcode
W G Bu Y 
Enter guess: 
```

### Simple Algorithm
1. Randomly generate the code
2. Accept guess & check validity
3. Compare guess to code
4. Score guess and show keys to player
5. If player has 4 black keys, player wins; else loop

### Extra Challenge:
Create an updated and expanded Mastermind game. Here are some ideas:
  - Add new colors (Orange, Pink) 
  - Add more pegs (5 or 6) 
  - Add a computer challenger
         
### Tips / Hints:
- Make good use of arrays

### Done? Great! Do you want to compare it to my code?
Right-click & click save link as on the "Download .cpp" button if you want to download it, otherwise just click "See Code" <br><br>

[<img src="https://dabuttonfactory.com/button.png?t=See+Code&f=Roboto&ts=24&tc=444&hp=20&vp=8&c=5&bgt=unicolored&bgc=9ddcff&be=1">](https://jeungsook.github.io/cs135/mastermindcode/) [<img src="https://dabuttonfactory.com/button.png?t=Download+.cpp&f=Roboto&ts=24&tc=444&hp=20&vp=8&c=5&bgt=unicolored&bgc=9ddcff&be=1">]({{ site.url }}/cs135/practice/Mastermind/Mastermind.cpp)
