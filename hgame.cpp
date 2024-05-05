/*
    Name: Ramesh Rahul Davanam
    Description: cpp code of Hangman program
*/

#include "hgame.h"
#include <iostream>
#include <cstdlib>
#include <ctime> 

HGame::HGame() {
    srand(time(NULL)); // Seeding the random function
    int randI = rand() % getSize(); 
    // Obtaining a random index within the length of the word 
    myWord = dictionary[randI];
    for (int i = 0; i < myWord.length(); i++) {
        tempWord[i] = '-';  // Initialising the intermediate results variable
    }
}

int HGame::reveal (char c) {
    string temp = myWord; // Defining temp variable to modify string
    int dash = 0; // Initialising output variable
    for (int i = 0; i < myWord.length(); i++) {
        if (temp[i] == c || temp[i] == tempWord[i]) {
        /* A condition is present to retain all the previous correct guesses and also update the current guess to the temporary variable*/
            temp[i] = temp[i];
        } else {
            temp[i] = '-'; // Counts the numbers of dashes remaining
        }
        if (temp[i] == '-') {
            dash++;
        }
    }
    tempWord = temp;
    cout << tempWord; return dash;
    // Updating the intermediate result to the next choice // Printing the updated result
}