#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int factorial = 1;

    while (n > 0) {                
        factorial *= n;
        n--;
    }

    cout << "Factorial of 5 is: " << factorial << endl;

    return 0;
}
                             //factorial*=n
                             //   1  = 1*5  (5--)
                             //   5 = 5*4   (4--)
                             //   20= 20*3  (3--)
                             //   60= 60*2  (2--)