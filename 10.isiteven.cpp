#include <iostream>
#include <string>
using namespace std;

// Function declaration
string checkEven(int number) {
    if (number % 2 == 0) {
        return "The provided number is even";
    } else {
        return "The provided number is odd";
    }
}

int main() {
    int num;
// Ask user for input
    cout << "Enter a number: ";
    cin >> num;
    // Call the function and store the returned message
    string result = checkEven(num);
 // Output the result
    cout << result << endl;
  return 0;
}
