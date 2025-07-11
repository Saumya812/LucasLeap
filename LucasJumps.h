#ifndef LUCASJUMPS_H // Header guard to prevent multiple inclusion
#define LUCASJUMPS_H

#include <iostream>
#include <windows.h> // Include platform-specific header (consider alternatives for portability)
#include <algorithm>

class LucasJumps {
private:
    char myArray[7]; // Array to represent the puzzle board

public:
    LucasJumps(); // Constructor to initialize the puzzle board
    char* getArray(); // Getter method to retrieve the puzzle board array
    int findIndex(const char arr[], int size, char target); // Method to find the index of a target character in an array
    void printArray(const char myArray[], int size); // Method to print the puzzle board array
    bool isPuzzleSolved(const char myArray[], int size); // Method to check if the puzzle is solved
    bool areMovesLeft(int emptyIndex); // Method to check if there are any valid moves left
    void movePiece(int& emptyIndex, int moveSelection); // Method to perform a move on the puzzle board
};

#endif // LUCASJUMPS_H
