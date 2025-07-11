#include "lucasjumps.h"
#include <iostream>
#include <windows.h> // Platform-specific header, consider alternative for portability
#include <algorithm>

using namespace std;

// Constructor initializes the initial state of the board
LucasJumps::LucasJumps() {
    // Initialize the board with the starting configuration
    myArray[0] = 'B';
    myArray[1] = 'B';
    myArray[2] = 'B';
    myArray[3] = '0'; // Empty slot indicated by '0'
    myArray[4] = 'R';
    myArray[5] = 'R';
    myArray[6] = 'R';
}

// Getter method to retrieve the board array
char* LucasJumps::getArray() {
    return myArray;
}

// Method to find the index of a target character in an array
int LucasJumps::findIndex(const char arr[], int size, char target) {
    bool TargetNotFound = false; 
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }

   return  TargetNotFound;
    //return -1; // Return -1 if target is not found
}

// Method to print the board array
void LucasJumps::printArray(const char myArray[], int size) {
    for (int i = 0; i < size; i++) {
        if (myArray[i] == 'B') {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9); // Set color to Blue for 'B'
            cout << 'B' << ""; // Output 'B' with no space
        }
        else if (myArray[i] == 'R') {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12); // Set color to red for 'R'
            cout << 'R' << ""; // Output 'R' with no space
        }
        else {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); // Reset color to default
            cout << myArray[i] << ""; // Output other characters
        }
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); // Reset color to default
    cout << endl; // New line after printing the board
}

// Method to check if the puzzle is solved
bool LucasJumps::isPuzzleSolved(const char myArray[], int size) {
    // Target configuration where 'R's are on the left and 'L's are on the right
    char targetArray[7] = { 'R', 'R', 'R', '0', 'B', 'B', 'B' };
   bool mytarget = false;
    for (int i = 0; i < size; i++) {
        if (myArray[i] != targetArray[i]) {
            return mytarget; // If any element doesn't match, return false
        }
    }
    mytarget = true; // If all elements match, return true
}

// Method to check if there are any valid moves left
bool LucasJumps::areMovesLeft(int emptyIndex) {
    // Check if there are valid moves based on the position of the empty slot
    return (emptyIndex > 0 && myArray[emptyIndex - 1] == 'B') ||
        (emptyIndex > 2 && myArray[emptyIndex - 2] == 'B') ||
        (emptyIndex < 6 && myArray[emptyIndex + 1] == 'R') ||
        (emptyIndex < 5 && myArray[emptyIndex + 2] == 'R');
}

// Method to perform a move on the board
void LucasJumps::movePiece(int& emptyIndex, int moveSelection) {
    // Perform the move based on the user's selection
    cout << "Move selection: " << moveSelection << ", emptyIndex: " << emptyIndex << endl;
    if (moveSelection == 1 && emptyIndex > 0 && myArray[emptyIndex - 1] == 'B') {
        swap(myArray[emptyIndex], myArray[emptyIndex - 1]); // Swap '0' with 'B'
        emptyIndex = emptyIndex - 1; // Update the index of the empty slot
    }
    else if (moveSelection == 2 && emptyIndex > 2 && myArray[emptyIndex - 2] == 'B') {
        swap(myArray[emptyIndex], myArray[emptyIndex - 2]); // Swap '0' with 'B'
        emptyIndex = emptyIndex - 2; // Update the index of the empty slot
    }
    else if (moveSelection == 3 && emptyIndex < 6 && myArray[emptyIndex + 1] == 'R') {
        swap(myArray[emptyIndex], myArray[emptyIndex + 1]); // Swap '0' with 'R'
        emptyIndex = emptyIndex + 1; // Update the index of the empty slot
    }
    else if (moveSelection == 4 && emptyIndex < 5 && myArray[emptyIndex + 2] == 'R') {
        swap(myArray[emptyIndex], myArray[emptyIndex + 2]); // Swap '0' with 'R'
        emptyIndex = emptyIndex + 2; // Update the index of the empty slot
    }
}
