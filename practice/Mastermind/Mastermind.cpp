//##############################################################//
//                          Mastermind                          //
//                      A code-breaking game                    //
//##############################################################//

// Jeung-Sook Williams jeung-sook.williams@unlv.edu

#include <iostream> // cin, cout
#include <cstdlib> // srand, rand
#include <ctime> // time

using namespace std;

//#### GLOBAL VARIABLES ####//

enum Colors {
  R = 0, W = 1, Y = 2, G = 3, Bu = 4, Bk = 5
};

enum Keys {
  None = -1, White = 0, Black = 1
};

const int CODE_LEN = 4, COLOR_NUM = 6;

//#### FUNCTION DEFINITIONS ####//

void generateCode(int[]);
void readGuess(string[], int[]);
bool convertCode(string[], int[]);
void assignKeys(int[], int[], int[], int&);
void printKeys(int[]);
void printCode(int[]);

int main(int argc, char* argv[]) {

  //#### VARIABLES ####//       

  int code[CODE_LEN]; // Array that contains the code to break
  int iguess[CODE_LEN]; // Array that contains the player's guess as ints
  int keys[CODE_LEN]; // Array of keys the player's last guess earned
  int bkeys; // Number of black keys the player has earned
  int guesses; // Numer of valid guesses the player has made
  string sguess[CODE_LEN]; // Array that contains the player's guess as strings
  string scode[CODE_LEN]; // Array that contains the code as strings if set as an argument
  bool win = false; // Whether or not the player has won


  //#### MAIN PROGRAM ####//       
  
  // Seed the rand function
  srand(time(NULL));

  // Generate code if one is not provided
  if (argc == 1)
    generateCode(code);
  else {
    for (int i = 0; i < CODE_LEN; i++) {
        scode[i] = argv[i+1];
    }  
    if (!convertCode(scode, code))
        exit(1);
  }

  // Initialize guesses
  guesses = 0;

  // Main loop
  while (win == false) {

    // Reset keys
    bkeys = 0;
    for (int i = 0; i < CODE_LEN; i++) {
      keys[i] = None;
    }

    // Get guess
    readGuess(sguess, code);

    // Check guess & convert it
    while (!convertCode(sguess, iguess)) {
      readGuess(sguess, code); 
    }

    guesses++;

    // Check the code against the guess and assign black and white keys
    assignKeys(code, iguess, keys, bkeys);

    // Print the keys to the screen
    printKeys(keys);

    // Check to see if player won
    if (bkeys >= CODE_LEN) {
      cout << endl;
      cout << "Code cracked! The secret code is: ";
      printCode(code);
      cout << "It took you " << guesses << " guesses to break the code." << endl;
      win = true;
    }

  }

  return 0;
}

// Function that randomly generates a code
void generateCode(int code[]) {
  for (int i = 0; i < CODE_LEN; i++) {
    code[i] = rand() % (COLOR_NUM - 1);
  }
}

// Function that reads in the player's guess
void readGuess(string guess[], int code[]) {

  cout << "Enter guess: ";

  for (int i = 0; i < CODE_LEN; i++) {

    cin >> guess[i];

    // Handles showcode cheat
    if (guess[i] == "showcode") {
      printCode(code);
      break;
    }

  }
}

// Function that converts code from a string array to an integer array
bool convertCode(string scode[], int icode[]) {

  // Replaces string with corresponding color int in the int array
  if (scode[0] != "showcode") {
    for (int i = 0; i < CODE_LEN; i++) {
      if (scode[i] == "R")
        icode[i] = R;
      else if (scode[i] == "W")
        icode[i] = W;
      else if (scode[i] == "Y")
        icode[i] = Y;
      else if (scode[i] == "G")
        icode[i] = G;
      else if (scode[i] == "Bu")
        icode[i] = Bu;
      else if (scode[i] == "Bk")
        icode[i] = Bk;
      else {
        cout << "Code not accepted, please try again." << endl;
        return false;
      }
    }
  } else
    return false;

  return true;
}

// Function that evalutates the guess and assigns black and white keys
void assignKeys(int code[], int guess[], int keys[], int& bkeys) {

  bool marked[CODE_LEN];

  for (int i = 0; i < CODE_LEN; i++)
    marked[i] = false;

  // Assign black keys
  for (int i = 0; i < CODE_LEN; i++) {
      // If the guess color and location is correct, assign a black key
    if (code[i] == guess[i]) {
      keys[i] = Black;
      marked[i] = true;
      bkeys++;
    }
  }

  // Assign white keys
  for (int i = 0; i < CODE_LEN; i++) 
    if (!marked[i]) 
        for (int j = 0; j < CODE_LEN; j++) 
        // If the guess color is correct, but the location is not correct, assign a white key
        if (code[i] == guess[j]) 
            if (keys[j] == None) {
                keys[j] = White;
                break;
            }
}

// Function that prints the player's keys
void printKeys(int keys[]) {

  int keycount = 0;

  // Count the number of keys
  for (int i = 0; i < CODE_LEN; i++)
    if (keys[i] != None)
      keycount++;

  // Print the keytops
  for (int i = 0; i < keycount; i++)
    cout << "F ";

  cout << endl;

  // Print the black key handles
  for (int i = 0; i < CODE_LEN; i++)
    if (keys[i] == Black)
      cout << (char)216 << " ";

  // Print white key handles
  for (int i = 0; i < CODE_LEN; i++)
    if (keys[i] == White)
      cout << "O ";

  cout << endl;
}

// Function that prints a code to the screen
void printCode(int code[]) {

  string peg;

  // Reads the integer code and prints out corresponding peg color label
  for (int i = 0; i < CODE_LEN; i++) {

    switch (code[i]) {
      case R:
        peg = "R";
        break;
      case W:
        peg = "W";
        break;
      case Y:
        peg = "Y";
        break;
      case G:
        peg = "G";
        break;
      case Bu:
        peg = "Bu";
        break;
      case Bk:
        peg = "Bk";
        break;
      default:
        peg = '-';
    }

    cout << peg << " ";
  }
  cout << endl;
}
