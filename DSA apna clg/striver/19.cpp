#include <iostream>
using namespace std;
int main()
{
    int n = 123;
     int count = 0;
    int lastDigit = 0;
    while (n >0)
    {
        lastDigit = n % 10;
        //cout << lastDigit;
        n = n / 10;
        count++;
       // cout << endl;
    }
    cout<<count;

    return 0;
}