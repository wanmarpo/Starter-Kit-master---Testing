# Part 1

## Video Demo

Please provide the YouTube link to your [Video Demo](https://youtube.com).

## Minimum Requirements

### Completed

1. Function for Main Menu
2. Setting and display for Game Board
3. Save Game

### To Do

1. Game objects, movements and controls

## Additional Features

Describe the additional features that has been implemented.

1. Can be played by more than one user.
2. Player can enter instructions many times if they mispell

## Contributions

### MUHAMMAD ADAM BIN MAZLI ZAKUAN

1. Create function for Main Menu

### AHMAD NUR IKHWAN BIN HAMID

1. Display the Game Board
2. Settings for Game Board

### MUHAMMAD AL-AMIN BIN MOHD NORMARZUKI

1. Function for save and load game

## Problems Encountered & Solutions

1. "redefinition of class Board" error appear when compile the main game file
2. "control reaches end of non-void function [-Wreturn-type]" error appear inside  
   "newGame.cpp" and "loadGame.cpp"
3. Restrict new user from entering names which are alredy existed in the userName.txt file
4. Input number of zombies over 9 or 0. Create a new function to accept only number > 0 && number < 9
5. Number of rows and columns of board display is different from the user input. The parameter dimX_ of for loop to create rows was mistakenly switched with dimY_ so    we switch it back.
