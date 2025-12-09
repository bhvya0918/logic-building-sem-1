Number Guessing Game (C Program)
This is a simple console-based Number Guessing Game written in C.
The program generates a random number between 1 and 100, and the user tries to guess it. After each attempt, the program provides hints to help the user reach the correct answer.
🔧 How It Works
•	A random number is generated using rand() and seeded with time(0) so it changes every run.
•	The user enters guesses in a loop.
•	The program checks each guess:
o	Too high → prompts to try again
o	Too low → prompts to try again
o	Correct → congratulates the user and ends the game
🧠 Concepts Used
•	Random number generation
•	Looping (while(1))
•	Conditional statements (if / else if / else)
•	User input handling
✔️ Outcome
A fully interactive game that helps beginners understand C basics like randomness, loops, and conditional logic.

