#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
  vector<int> vector = {2, 4, 3, 6, 1, 9};
  int odd = 1;
  int even = 0;
 
  for (int i = 0; i < vector.size(); i++){
    if (vector[i] % 2 == 0) {
      even = even + vector[i];
    } else{
      odd = odd * vector[i];
    }
  }
  cout << "Sum of even numbers is " << even << endl;
  cout << "Product of odd numbers is " << odd << endl;
}
