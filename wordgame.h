/*
    Name: Ramesh Rahul Davanam
    Description: Header rogram of Hangman game
*/

#ifndef WORDGAME_H
#define WORDGAME H

#include <iostream>
#include <string> 

using std::string; 
using std::cin;
using std::cout;
using std::endl;

const unsigned int DSIZE = 28;
const char d[][DSIZE] ={"astronaut", "spaceship", "planetary", "village", "intergalactic", "equador", "equilibrium", "equivalent",
                        "procrastrinate", "equestrian", "astronomic", "affective", "assessment", "stableboy", "variable", "applesauce", 
                        "sufficient", "ventriloquist", "basement", "basically", "bedazzled", "bandaged", "cumbersome", "canteloupe",
                         "critical", "castaway", "compasses", "compassing"};

class WordGame {
    public:
        WordGame() {
        for (int i = 0; i < DSIZE; i++) 
            dictionary[i] = d[i];  // takes the word from the string list
        }

    virtual ~WordGame() { } // virtual destructor

    int getSize() const {
        return DSIZE;
    } // returns the size of the dictionary

    protected:
        string dictionary [DSIZE];  
};
#endif // WORDGAME H