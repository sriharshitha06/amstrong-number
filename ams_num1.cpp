#include <bits/stdc++.h>
using namespace std;

// Check if num is an Armstrong number
bool isArmstrong(int num) {
    int k = to_string(num).length(); // Number of digits
    int sum = 0; // Sum of powered digits
    int n = num; // Copy of the original number

    // Loop through each digit
    while (n > 0) {
        int ld = n % 10; // Get last digit
        sum += pow(ld, k); // Add powered last digit
        n = n / 10; // Remove last digit
    }
    
    return sum == num; // Check if sum equals original number
}

int main() {
    int n; 
    cin >> n; 

    // Check and print if n is an Armstrong number
    if (isArmstrong(n)) {
        cout << n << " is an Armstrong number." << endl; 
    } else {
        cout << n << " is not an Armstrong number." << endl; 
    }
    
    return 0; 
}
