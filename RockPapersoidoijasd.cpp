#include <iostream>
#include <random>
using namespace std;

// Rock Paper sisisiss

// Intialize Variables
string bot;
int player;

string choiceToString(int choice) {
    // This function is made by chatgpt as I was too lasy
    if (choice == 1) return "rock";
    if (choice == 2) return "paper";
    if (choice == 3) return "scissors";
    return "unknown";
    // End of chatgpt code.
}

int main() {
    cout << "Select your choise (1: Rock, 2: Paper, 3: Sicors): "; cin >> player;
    if (player < 1 || player > 3) {
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
    cout << "You chose: " << choiceToString(player) << endl;
    cout << "Bot chose: " << bot << endl;

    // Determine the winner
    if (player == numberbot) {
        cout << "It's a tie!" << endl;
    } else if ((player == 1 && numberbot == 3) || // Rock beats Scissors
               (player == 2 && numberbot == 1) || // Paper beats Rock
               (player == 3 && numberbot == 2)) { // Scissors beats Paper
        cout << "You win!" << endl;
    } else {
        cout << "Bot wins!" << endl;
    }
    // End of chatgpt code
    cout << "\n\nCredits to:\nhttps://github.com/MudiBro\nhttps://stackoverflow.com/questions/13445688/how-to-generate-a-random-number-in-c \nand a very small part of code from ChatGPT";
    return 0; // End application.
}
