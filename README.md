# LucasLeap
Lucas Jumps — A simple C++ console puzzle game implemented that challenges you to swap positions of two groups of tokens (`B` and `R`) on a linear board by jumping and sliding moves. The goal is to reach the target configuration with minimal moves.

---

## About

Lucas Jumps is a logic puzzle where:

- Three blue tokens (`B`) start on the left.
- Three red tokens (`R`) start on the right.
- An empty space (`0`) is in the center.
- Tokens can slide into adjacent empty spaces or jump over one token to the empty spot.
- The goal is to swap the positions of the `B`s and `R`s.

This project implements the puzzle as a console app using object-oriented programming concepts in C++.

---

## Features

- Object-oriented design with encapsulated puzzle logic.
- Board display with color-coded tokens (blue and red) using Windows console colors.
- Input validation for moves.
- Win condition detection.
- Modular code with clear separation of functionality.

---

## Usage

1. Compile the project using a C++ compiler (e.g., `g++` or Visual Studio).
2. Run the executable.
3. Follow on-screen prompts to enter the position of the token you want to move.
4. Tokens can move by sliding into adjacent empty spaces or jumping over one token.
5. Enter `-1` to exit the game anytime.
6. Solve the puzzle by swapping the red and blue tokens.

---





## Technical Explanation

The Lucas Jumps Puzzle project is implemented in C++ using object-oriented programming principles. Below are some key technical details:

### Data Structure

- The puzzle board is represented as a fixed-size character array (`char myArray[7]`), where:
  - `'B'` represents blue tokens
  - `'R'` represents red tokens
  - `'0'` represents the empty slot

### Game Logic

- Moves consist of sliding tokens adjacent to the empty slot or jumping over one token to an empty space.
- The `movePiece` method updates the board state by swapping the empty slot with a valid token.
- Valid moves are checked through the `areMovesLeft` method, which ensures that moves follow puzzle rules.

### Win Condition

- The puzzle is solved when the configuration matches the target pattern:
  
  `{'R', 'R', 'R', '0', 'B', 'B', 'B'}`

- This is checked by the `isPuzzleSolved` method by comparing the current board state to the target array.

### User Interface

- The game uses console input/output for interaction.
- Windows-specific console API (`SetConsoleTextAttribute`) is used for coloring tokens:
  - Blue (`B`) tokens are shown in blue.
  - Red (`R`) tokens are shown in red.
- Input validation is done to ensure users select valid moves and positions.

## Requirements

- Windows OS (due to console color usage).
- C++ compiler supporting C++11 or later.

### Limitations

- The current implementation is Windows-only due to console color usage.
- The game logic is fixed to a 7-position board with 3 tokens per side.
- No automated solver or hints are included yet.


## Future Improvements

- Cross-platform console color support (e.g., using ANSI escape codes).
- Add an automated puzzle solver (backtracking or BFS).
- Implement a hint system for next best move.
- Support customizable board sizes and token counts.
- Add unit tests to verify game logic.
- Improve user input handling and UI clarity.

### Possible Extensions

- Replace Windows console color calls with cross-platform ANSI escape codes.
- Implement an automated puzzle solver using backtracking or breadth-first search.
- Extend board size and token count for a generalized puzzle.
- Add a graphical user interface using libraries like SFML or Qt.

---

This project demonstrates fundamental algorithmic problem solving, array manipulation, and basic UI in C++, making it an excellent exercise for intermediate programmers.


## Author

Saumya Brahmbhatt  
Computer Science Enthusiast  
[LinkedIn](https://www.linkedin.com/in/saumyabrahmbhatt/)  
Email: saumyabrahmbhatt812@gmail.com

## Acknowledgment
Thanks to Harford Community College for supporting this academic project.
