// All  the good things i posted in my repository into one thing
// Github: https://github.com/MudiBro/Cpp-Examples
// I might update this in the future, idk. 


#include <iostream>
#include <chrono>
#include <thread>
#include <random>
#include <stdlib.h> 
#include <cstdlib>

using namespace std;
using namespace std::chrono;
int maxNumber;
int selectedNumber;
int guessedNumber;
bool notAnswered = true;
int trys = 0;
string bot;
int players;
char place1 = ' '; 
char place2 = ' '; 
char place3 = ' '; 
char place11 = ' '; 
char place12 = ' '; 
char place13 = ' '; 
char place31 = ' '; 
char place32 = ' '; 
char place33 = ' ';

char player = 'x';
int choice;

int choices; int number; int product; bool forever = true;
int doublenumber() {
    return number * 2;
}
int triplenumber() {
    return number * 3;
}
int doubleTriple() {
    while (forever){
        cout << "                          |-----------------|\n                          |Choose between:  | \n                          |1: double        |\n                          |2: triple        | \n                          |3: end           |\n                          |-----------------|\n";
        cout << "Choice: ";
        cin >> choices;
        cout << "\n";
        if (choices == 1) {
            cout << "Number: ";
            cin >> number;
            cout << "\n";
            cout << number << " x " << "2" << " = " << doublenumber() << "\n";
            cout << "\n\n";
        } else if (choices == 2) {
            cout << "Number: ";
            cin >> number;
            cout << "\n";
            cout << number << " x " << "3" << " = " << triplenumber() << "\n";
            cout << "\n\n";
        } else if (choices == 3) {
            return 0;
        }
    }
    
}

int guessnumbergame() {
    trys = 1;
    while (notAnswered) {
        cout << "\n\n\nGuess the number: "; cin >> guessedNumber;
        if (guessedNumber == selectedNumber) {
            notAnswered = false;
        } else {
            cout << "Incorrect, try again!";
            trys++;
        }
    }
    cout << "Correct! Game ended. Took " << trys << " tries!"; return 0;
    
}

int guesnumber() {
    cout << "Enter the max number to generate for you to guess: "; cin >> maxNumber;
    
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist6(1,maxNumber); // distribution in range [1, maxNumber]
    selectedNumber = dist6(rng);
    guessnumbergame();
    
    return 0;
    

    
}

string choiceToString(int choice) {
    // This function is made by chatgpt as I was too lasy
    if (choice == 1) return "rock";
    if (choice == 2) return "paper";
    if (choice == 3) return "scissors";
    return "unknown";
    // End of chatgpt code.
}

int rockpaper() {
    cout << "Select your choise (1: Rock, 2: Paper, 3: Sicors): "; cin >> players;
    if (players < 1 || players > 3) {
        cout << "Invalid choice. Please select 1, 2, or 3." << endl;
        return 1; 
    }
    // Searched on stackoverflow to find out how to generate a random number. https://stackoverflow.com/questions/13445688/how-to-generate-a-random-number-in-c
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist6(1,3); // distribution in range [1, 6]
    // End of what i got from stack overflow.
    int numberbot = dist6(rng);
    if (numberbot == 1) {
        bot = "rock";
    } else if (numberbot == 2) {
        bot = "paper";
    } else if (numberbot == 3) {
        bot = "scissors";
    } else {
        cout << "ERROR: Bot chose something other than 1-3. Please try again, or fix the source code.";
    }
    
    // Below is coded by chatgpt as I was too lasy
    // Display choices
    cout << "You chose: " << choiceToString(players) << endl;
    cout << "Bot chose: " << bot << endl;

    // Determine the winner
    if (players == numberbot) {
        cout << "It's a tie!" << endl;
    } else if ((players == 1 && numberbot == 3) || // Rock beats Scissors
               (players == 2 && numberbot == 1) || // Paper beats Rock
               (players == 3 && numberbot == 2)) { // Scissors beats Paper
        cout << "You win!" << endl;
    } else {
        cout << "Bot wins!" << endl;
    }
    // End of chatgpt code
    cout << "\n\nCredits to:\nhttps://github.com/MudiBro\nhttps://stackoverflow.com/questions/13445688/how-to-generate-a-random-number-in-c \nand a very small part of code from ChatGPT";
    return 0; // End application.
}


void plays() {
    cout << "\nPlayer " << player;
    cout << "\nChoose where you want to go (Choices: 1, 2, 3, 11, 12, 13, 31, 32, 33): ";
    cin >> choice;

    if (choice == 1) {
        if (place1 == 'o' || place1 == 'x'){
            cout << "Placed where someone already is, ending application"; exit(0);
        } else {
            place1 = player;
        }
        
    }
    else if (choice == 2) {
        if (place2 == 'o' || place2 == 'x'){
            cout << "Placed where someone already is, ending application"; exit(0);
        } else {
            place2 = player;
        }
    }
    else if (choice == 3) {
        if (place3 == 'o' || place3 == 'x'){
            cout << "Placed where someone already is, ending application"; exit(0);
        } else {
            place3 = player;
        }
    }
    else if (choice == 11) {
        if (place11 == 'o' || place11 == 'x'){
            cout << "Placed where someone already is, ending application"; exit(0);
        } else {
            place11 = player;
        }
    }
    else if (choice == 12) {
        if (place12 == 'o' || place12 == 'x'){
            cout << "Placed where someone already is, ending application"; exit(0);
        } else {
            place12 = player;
        }
    }
    else if (choice == 13) {
        if (place13 == 'o' || place13 == 'x'){
            cout << "Placed where someone already is, ending application"; exit(0);
        } else {
            place13 = player;
        }
    }
    else if (choice == 31) {
        if (place31 == 'o' || place31 == 'x'){
            cout << "Placed where someone already is, ending application"; exit(0);
        } else {
            place31 = player;
        }
    }
    else if (choice == 32) {
        if (place32 == 'o' || place32 == 'x'){
            cout << "Placed where someone already is, ending application"; exit(0);
        } else {
            place32 = player;
        }
    }
    else if (choice == 33) {
        if (place33 == 'o' || place33 == 'x'){
            cout << "Placed where someone already is, ending application"; exit(0);
        } else {
            place33 = player;
        }
    }
    if (player == 'x') {
        player = 'o';
    } else if (player == 'o') {
        player = 'x';
    }
}

// Print the board
void printboard() {
    cout << " " << "1" << "   " << "2" << "   " << "3" << "\n \n";
    cout << " " << place1 << " | " << place2 << " | " << place3 << "          0\n";
    cout << " ----------\n";
    cout << " " << place11 << " | " << place12 << " | " << place13 << "          1\n";
    cout << " ----------\n";
    cout << " " << place31 << " | " << place32 << " | " << place33 << "          3\n";
    plays();
}

// Check for winner logic
int checkwinner() {
    if ((place1 == 'x' && place2 == 'x' && place3 == 'x') ||
        (place1 == 'x' && place11 == 'x' && place31 == 'x') ||
        (place3 == 'x' && place13 == 'x' && place33 == 'x') ||
        (place31 == 'x' && place32 == 'x' && place33 == 'x') ||
        (place1 == 'x' && place12 == 'x' && place33 == 'x') ||
        (place3 == 'x' && place12 == 'x' && place31 == 'x' || place31 == 'x' & place32 == 'x' & place33 == 'x' || place11 == 'x' && place12 == 'x' & place13 == 'x' || place2 == 'x' & place12 == 'x' & place32 == 'x')) {
        return 1;
    } else if ((place1 == 'o' && place2 == 'o' && place3 == 'o') ||
               (place1 == 'o' && place11 == 'o' && place31 == 'o') ||
               (place3 == 'o' && place13 == 'o' && place33 == 'o') ||
               (place31 == 'o' && place32 == 'o' && place33 == 'o') ||
               (place1 == 'o' && place12 == 'o' && place33 == 'o') ||
               (place3 == 'o' && place12 == 'o' && place31 == 'o' || place31 == 'o' & place32 == 'o' & place33 == 'o' || place11 == 'o' && place12 == 'o' & place13 == 'o' || place2 == 'o' & place12 == 'o' & place32 == 'o')) {
        return 2;
    }
    return 0;
}

// Start the game
int startic() {
    for (int i = 0; i < 9; i++) {
        if (checkwinner() == 0) {
            printboard();
        } else if (checkwinner() == 1) {
            cout << " " << "1" << "   " << "2" << "   " << "3" << "\n \n";
            cout << " " << place1 << " | " << place2 << " | " << place3 << "          0\n";
            cout << " ----------\n";
            cout << " " << place11 << " | " << place12 << " | " << place13 << "          1\n";
            cout << " ----------\n";
            cout << " " << place31 << " | " << place32 << " | " << place33 << "          3\n";
            cout << "Player x won!";
            return 0;
        } else if (checkwinner() == 2) {
            cout << " " << "1" << "   " << "2" << "   " << "3" << "\n \n";
            cout << " " << place1 << " | " << place2 << " | " << place3 << "          0\n";
            cout << " ----------\n";
            cout << " " << place11 << " | " << place12 << " | " << place13 << "          1\n";
            cout << " ----------\n";
            cout << " " << place31 << " | " << place32 << " | " << place33 << "          3\n";
            cout << "Player o won!";
            return 0;
        }
    }

    if (checkwinner() == 0) {
        cout << "TIE";
        return 0;
    }
    return 0;
}


int main() {
    int gamce;
    cout << "CHOOSE THE PROJECT. Choices: \n1:Tic tac toe\n2: rock paper sicijsdf\n3: Guess the number\n4: Double triple 2.0\nChoice:";
    cin >> gamce;
    if (gamce == 1) {
        startic();
    } else if (gamce == 2) {
        rockpaper();
    } else if (gamce == 3) {
        guesnumber();
    } else if (gamce == 4) {
        doubleTriple();
    } else {
        cout << "Incorrect!";
    }
    return 0;
}






