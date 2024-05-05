# Hangman game

## How to compile the code and view the output

In your command prompt / terminal, navigate to the path where thise code is downloaded and run the following commands:

```shell
g++ -c hgame.cpp
g++ -c hangman.cpp
g++ -o output hgame.o hangman.o
./output
```
The option -c tells the compiler to skip the linker step and to produce an object (.o) file of the respective code.

If you later change, e.g., the main program, you have to repeat only the compilation of the changed code and the linker step:
```shell
g++ -c hangman.cpp
g++ -o output hgame.o hangman.o
```

Alternatively you can also run the following command:

```shell
g++ hgame.cpp hangman.cpp -o output
./output
```
