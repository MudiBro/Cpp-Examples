//Gettin a bit more advanced

#include <iostream>
using namespace std;

int number; int answer; bool forever = true; int selection;

int doubleNumber() {
    while (forever) {
        //here
        cout << "\nInput a number to double (write 2233455 to stop): ";
        cin >> number;
        if (number == 2233455) {
            return 0;
        }
        cout << "\n";
        //here
        answer = number * 2;
        cout << number << "x2 is " << answer << endl;
    }
    return 0;
}

int tripleNumber() {
    while (forever) {
        //here
        cout << "\nInput a number to triple (write 2233455 to stop): ";
        cin >> number;
        if (number == 2233455) {
            return 0;
        }
        cout << "\n";
        //here
        answer = number * 3;
        cout << number << "x3 is " << answer << endl;
    }
    return 0;
}

int main() {
    cout << "Select between: Double(1), or triple(2): ";
    cin >> selection;
    cout << "\n";
    if (selection == 1) {
        doubleNumber();
    } else if (selection == 2) {
        tripleNumber();
    } else {
        cout << "Wrote incorrect option (not 1 or 2). Please restart the app!";
    }
}
