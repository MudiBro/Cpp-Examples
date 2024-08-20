#include <iostream>
#include <cstdlib>
using namespace std;

// Variable Initializations:
// I coded this without vector so :(
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

// Play logic
void play() {
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
    play();
}

// Check for winner logic
int checkwinner() {
    if ((place1 == 'x' && place2 == 'x' && place3 == 'x') ||
        (place1 == 'x' && place11 == 'x' && place31 == 'x') ||
        (place3 == 'x' && place13 == 'x' && place33 == 'x') ||
        (place31 == 'x' && place32 == 'x' && place33 == 'x') ||
        (place1 == 'x' && place12 == 'x' && place33 == 'x') ||
        (place3 == 'x' && place12 == 'x' && place31 == 'x' || place31 == 'x' & place32 == 'x' & place33 == 'x' || place11 == 'x' && place12 == 'x' & place13 == 'x')) {
        return 1;
    } else if ((place1 == 'o' && place2 == 'o' && place3 == 'o') ||
               (place1 == 'o' && place11 == 'o' && place31 == 'o') ||
               (place3 == 'o' && place13 == 'o' && place33 == 'o') ||
               (place31 == 'o' && place32 == 'o' && place33 == 'o') ||
               (place1 == 'o' && place12 == 'o' && place33 == 'o') ||
               (place3 == 'o' && place12 == 'o' && place31 == 'o' || place31 == 'o' & place32 == 'o' & place33 == 'o' || place11 == 'o' && place12 == 'o' & place13 == 'o')) {
        return 2;
    }
    return 0;
}

// Start the game
int start() {
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
    start();
    return 0;
}
