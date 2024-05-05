/*
    Name: Ramesh Rahul Davanam
    Description: Header rogram of Hangman game
*/

#ifndef HGAME_H
#define HGAME_H

#include "wordgame.h"
#include <string>

using std::string;

class HGame : public WordGame {
    private:
        string myWord; // String of the word to be guessed
        string tempWord; // Variable of intermediate results
    public:
        HGame(); // Constructor class
        int reveal (char c); 
        // Prints the number of dashes as the word length to be guessed
};

#endif