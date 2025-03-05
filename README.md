[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/l4ehEadK)
Dice Roller - Chance Game
Objective:
For this assignment, you will build on the "Dice Roller Program with Classes" that you completed last semester. You will integrate your Dice class into a raylib project to create a graphical dice roller.

Requirements:
Refactor the Dice Class:

Move your Dice class into separate source and header files:
dice.h: Contains the class declaration.
dice.cpp: Contains the class implementation.
Use raylib for Graphics:

Keep your raylib code in main.cpp.
Use raylib to:
Draw a window with the title "Dice Roller".
Display instructions, such as "Press SPACE to roll the dice."
Show the result of the dice roll using images.
Implement Interaction:

When the user presses the SPACE key:
Roll the dice using the Dice class.
Display the corresponding image for the roll result (e.g., show the dice face for the rolled number).
Random Number Generation:

Ensure your program uses a random number generator seeded with the current time (srand(time(0))) in main.cpp.
Images:

Include images for the dice faces (e.g., dice1.png, dice2.png, etc.).
Display the correct image for the rolled number in the raylib window.
Program Expectations:
Basic Functionality:

When the program starts, it displays a window with instructions.
When the SPACE key is pressed, a random dice roll is generated, and the corresponding image is displayed.
Graphics:

You must use images for the dice faces.
Include at least one image for each possible dice roll.
Optional Features:
Add animations for the dice roll.
Add support for rolling multiple dice at once and displaying multiple images.
Implement an alternative theme, such as:
Magic 8 Ball: Display a random message or image instead of dice numbers.
Rock-Paper-Scissors: Display the outcome of a random choice between Rock, Paper, and Scissors using images.
