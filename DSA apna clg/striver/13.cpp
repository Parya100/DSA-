#include <iostream>
using namespace std;

int checkCharacter(char CH) {
    if (CH >= 'A' && CH <= 'Z') {
        return 1;  // Uppercase alphabet
    } else if (CH >= 'a' && CH <= 'z') {
        return 0;  // Lowercase alphabet
    } else {
        return -1; // Not an alphabet
    }
}

int main() {
    char CH;
    cout << "Enter a character: ";
    cin >> CH;
    
    int result = checkCharacter(CH);
    cout << "Result: " << result << endl;
    
    return 0;
}
