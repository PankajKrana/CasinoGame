# Casino Game

## Introduction

This C++ program implements a simple casino game where players can bet on a number between 1 and 10. The player has the opportunity to win or lose money based on whether their chosen number matches the randomly generated dice roll. The game continues until the player decides to stop or runs out of money.

## How to Run

1. Ensure you have a C++ compiler installed on your system.
2. Copy the provided code into a C++ source file (e.g., `guessnumber.cpp`).
3. Compile the code using your preferred C++ compiler.
4. Run the compiled executable.

## Game Rules

1. Enter your name and initial deposit amount.
2. Follow the on-screen instructions to place bets and guess a number between 1 and 10.
3. If your guess matches the randomly generated number, you win 10 times your bet amount.
4. If your guess is incorrect, you lose your bet amount.
5. The game continues until you decide to stop or run out of money.

## Features

- **Random Number Generation:** The program uses the `rand()` function to generate a random number for the dice roll.
- **Input Validation:** The code includes input validation to ensure that the entered bet amount and guess are within the valid range.
- **Balance Tracking:** The player's balance is displayed after each round, and the game ends if the player runs out of money.

## How to Play

1. Enter your name and initial deposit.
2. Follow the on-screen instructions to place bets and guess numbers.
3. Enjoy the thrill of the game and try to increase your balance.

## Notes

- The code uses the `system("cls")` function to clear the console screen, which may not work on all systems. Consider using platform-independent methods for clearing the screen if needed.
- This is a simple casino game for educational purposes and does not involve real money.

