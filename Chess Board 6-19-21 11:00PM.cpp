//******************************************************************
// Chessboard program - chessboard.cpp
// This program prints a chessboard pattern that is built up from
// basic strings of white and black characters.
//******************************************************************
#include <iostream>
#include <string>
using namespace std;

const string blackFill = "%%%%%%%%%%%"; // Define a line of a black upper/lower filled line
const string blackEmpty = "%         %"; // Define a line of a black border 
const string whiteSquareRow = "           "; //Defines a white square's row

int main ()
{
string blackFillRow; // A row beginning with a white square
string blackEmptyRow; // A row beginning with a black square
string whiteFillRow; //A white row with blackFill border squares fro black squares
string whiteEmptyRow; //A white row with blackEmpty borders for black squares
// Create a white-black row by concatenating the basic strings
blackEmptyRow = whiteSquareRow + blackEmpty + whiteSquareRow + blackEmpty + whiteSquareRow + blackEmpty + whiteSquareRow + blackEmpty;
// Create a black-white row by concatenating the basic strings
blackFillRow = whiteSquareRow + blackFill + whiteSquareRow + blackFill + whiteSquareRow + blackFill + whiteSquareRow + blackFill;
//White start row with black empty pattern
whiteEmptyRow = whiteSquareRow + blackEmpty + whiteSquareRow + blackEmpty + whiteSquareRow + blackEmpty + whiteSquareRow + blackEmpty;
// Print five white-black rows
cout << whiteEmptyRow << endl;
cout << whiteEmptyRow << endl;
cout << whiteEmptyRow << endl;
cout << whiteEmptyRow << endl;
cout << whiteEmptyRow << endl;

// Print five black-white rows
cout << blackFillRow << endl;
cout << blackEmptyRow << endl;
cout << blackEmptyRow << endl;
cout << blackEmptyRow << endl;
cout << blackEmptyRow << endl;
cout << blackEmptyRow << endl;
cout << blackFillRow << endl;

// Print five white-black rows
cout << whiteEmptyRow << endl;
cout << whiteEmptyRow << endl;
cout << whiteEmptyRow << endl;
cout << whiteEmptyRow << endl;
cout << whiteEmptyRow << endl;
// Print five black-white rows
cout << blackFillRow << endl;
cout << blackEmptyRow << endl;
cout << blackEmptyRow << endl;
cout << blackEmptyRow << endl;
cout << blackEmptyRow << endl;
cout << blackEmptyRow << endl;
cout << blackFillRow << endl;
// Print five white-black rows
cout << whiteEmptyRow << endl;
cout << whiteEmptyRow << endl;
cout << whiteEmptyRow << endl;
cout << whiteEmptyRow << endl;
cout << whiteEmptyRow << endl;

// Print five black-white rows
cout << blackFillRow << endl;
cout << blackEmptyRow << endl;
cout << blackEmptyRow << endl;
cout << blackEmptyRow << endl;
cout << blackEmptyRow << endl;
cout << blackEmptyRow << endl;
cout << blackFillRow << endl;

// Print five white-black rows
cout << whiteEmptyRow << endl;
cout << whiteEmptyRow << endl;
cout << whiteEmptyRow << endl;
cout << whiteEmptyRow << endl;
cout << whiteEmptyRow << endl;

// Print five black-white rows
cout << blackFillRow << endl;
cout << blackEmptyRow << endl;
cout << blackEmptyRow << endl;
cout << blackEmptyRow << endl;
cout << blackEmptyRow << endl;
cout << blackEmptyRow << endl;
cout << blackFillRow << endl;

// system("PAUSE"); //Maybe needed by a few compilers to pause the console output
return 0;
}
