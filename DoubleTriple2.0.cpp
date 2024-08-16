#include <iostream>
#include <chrono>
#include <thread>
#include <stdlib.h> 

using namespace std;
using namespace std::chrono;


int choice; int number; int product; bool forever = true;
int doublenumber() {
    return number * 2;
}
int triplenumber() {
    return number * 3;
}
int main() {
    while (forever){
        cout << "                          |-----------------|\n                          |Choose between:  | \n                          |1: double        |\n                          |2: triple        | \n                          |3: end           |\n                          |-----------------|\n";
        cout << "Choice: ";
        cin >> choice;
        cout << "\n";
        if (choice == 1) {
            cout << "Number: ";
            cin >> number;
            cout << "\n";
            cout << number << " x " << "2" << " = " << doublenumber() << "\n";
            cout << "\n\n";
        } else if (choice == 2) {
            cout << "Number: ";
            cin >> number;
            cout << "\n";
            cout << number << " x " << "3" << " = " << triplenumber() << "\n";
            cout << "\n\n";
        } else if (choice == 3) {
            return 0;
        }
    }
    
}
