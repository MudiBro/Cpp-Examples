#include <iostream>
using namespace std;

// Create a constant variable
const int i = 1;

int main() {
    // Uncommenting the below will result in an error. I will explain soon.
    // i++
    // i = 5
    cout << i;
    
    // The reason it results in an error is a constant is a read-only variable.
    // Meaning you cant modify it in anyway. Only read it (print it, etc)
}
