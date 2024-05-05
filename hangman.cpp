/*
    Name: Rahul R Davanam
    Description: Main code file of Hangman game
*/

#include "hgame.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl; 

int main() {
    HGame game; // Creating object of a class
    int attempt = 0; // Initialising variable to count number of attempts
    int maxAttempt = 5;
    /* Bonus task: This variable provides the maximum number of tries. 
    We can m this variable to modify the number of tries. Here, we've changed it to 20, 
    by taking the longest word, which is of 14 letters and providing some extra tries as buffer. */
    char guess = ' ';

    while (true) {
        cout << "I'm thinking of a word: ";
        int revealed = game.reveal(guess);
        cout << ", ";

        if (revealed == 0) {  // Condition statement for win case 
            cout << "Great you have won the game!" << endl; 
            return 0;
        } else if (revealed != 0 && attempt > maxAttempt) { // Condition statement for lose case
            cout << "Too bad I have won the game!" << endl; 
            return 0;
        } else { // Condition statement for guessing case 
            cout << "What character shall I reveal? ";
            cin >> guess;
        }
        attempt++;
    }
    return 0;
}