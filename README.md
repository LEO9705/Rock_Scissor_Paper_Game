# Rock Paper Scissors (C++)

## What it does
A console-based rock-paper-scissors game against the CPU.
The user types `rock`, `scissor`, or `paper`. The CPU chooses a hand randomly.
If it’s a tie, the game asks the user to play again.

## Key idea
Instead of writing many `if` statements for every matchup, I convert each hand into a number and determine win/loss using the difference between the player’s number and the CPU’s number.

## What I learned
I practiced using a function to separate the game logic, seeding and generating pseudo-random choices for the CPU, and using `do-while` loops to handle input + rematches cleanly.

## Requirements
A C++ compiler (`g++` or `clang++`)

## How to run (macOS / Linux)
```bash
g++ main.cpp -o app
./app
```
## How to run (Windows, MinGW)
```bash
g++ main.cpp -o app.exe
```
## Command Prompt:
```bash
app.exe
```
## PowerShell:
```bash
.\app.exe
```
## Example:
```bash
Choose your hand: rock
CPU's hand was scissor
You win!
```
## Next Improvements
	•	Validate non-string or unexpected input more robustly
	•	Add a “play again” option even after win/lose
