#include <iostream>
#include <string> 
#include <cmath>  
using namespace std;
bool isArmstrong(int num) {
    string numStr = to_string(num); 
    int n = numStr.length();       
    int sum = 0;
    for (char ch : numStr) {
        int digit = ch - '0';        
        sum += pow(digit, n);          
    }
    return sum == num;
}
int main() {
    int num;
    cin >> num;
    if (isArmstrong(num)) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }
    return 0;
}
