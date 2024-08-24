#include <iostream>
#include <random>



using namespace std;

int maxNumber;
int selectedNumber;
int guessedNumber;
bool notAnswered = true;

int game() {
    while (notAnswered) {
        cout << "\n\n\nGuess the number: "; cin >> guessedNumber;
        if (guessedNumber == selectedNumber) {
            notAnswered = false;
        } else {
            cout << "Incorrect, try again!";
        }
    }
    cout << "Correct! Game ended"; return 0;
    
}

int main() {
    cout << "Enter the max number to generate for you to guess: "; cin >> maxNumber;
    
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist6(1,maxNumber); // distribution in range [1, maxNumber]
    selectedNumber = dist6(rng);
    game();
    

    
}
