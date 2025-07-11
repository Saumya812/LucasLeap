#include <iostream>
#include "lucasjumps.h"
#define PIVOT 0

int main() {
    LucasJumps lucasJumps;

    std::cout << "Welcome to the Lucas Jumps Puzzle Simulation!" << std::endl;
    lucasJumps.printArray(lucasJumps.getArray(), 7); // Print initial board

    bool jumps = true;
    while (jumps) {
        int move;
        std::cout << "Enter position of token to move (0-6) or -1 to exit: ";
        std::cin >> move;

        if (move == -1) {
            std::cout << "Exiting the game. Goodbye!" << std::endl;
            //break;
            jumps = false; //Exit loop
        }

        else if (move < 0 || move > 6) {
            std::cout << "Invalid position. Please enter a number between 0 and 6." << std::endl;
            //continue;
        }

        else {
            if (lucasJumps.areMovesLeft(move)) {
                lucasJumps.movePiece(move, move);
                lucasJumps.printArray(lucasJumps.getArray(), 7); // Print updated board

                // Check for a win condition
                if (lucasJumps.isPuzzleSolved(lucasJumps.getArray(), 7)) {
                    std::cout << "Congratulations! You've solved the Lucas Jumps puzzle!" << std::endl;
                    jumps = false;  //Exit loop
                }
            }
            else {
                std::cout << "No valid moves available. Please try again." << std::endl;
            }
        }
    }
    return 0;
}
