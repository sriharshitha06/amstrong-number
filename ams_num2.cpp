#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Check if num is an Armstrong number
bool isArmstrong(int num) {
    string numStr = to_string(num); // Convert number to string
    int n = numStr.length(); // Number of digits
    int sum = 0; // Sum of powered digits

    // Loop through each character in the string
    for (char ch : numStr) {
        int digit = ch - '0'; // Convert char to int
        sum += pow(digit, n); // Add powered digit to sum
    }
    
    return sum == num; // Check if sum equals original number
}

int main() {
    int num; 
    cin >> num; 

    // Check and print if num is an Armstrong number
    if (isArmstrong(num)) {
        cout << num << " is an Armstrong number." << endl; 
    } else {
        cout << num << " is not an Armstrong number." << endl; 
    }

    return 0; 
}
