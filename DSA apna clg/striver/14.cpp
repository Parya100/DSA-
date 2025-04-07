#include <iostream>
using namespace std;

void printNumbers(int current, int n) {
    if (current > n) {
        return;  // Base case: stop when current exceeds n
    }
    cout << current << " ";  // Print the current number
    printNumbers(current + 1, n);  // Recursive call with the next number
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    printNumbers(1, n);  // Start printing from 1 to n
    
    return 0;
}
