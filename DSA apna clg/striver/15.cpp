#include <iostream>
using namespace std;

void print()
{
    cout << "prince";
}
int sum(int a, int b)
{
    a + b;
    return a + b;
}

int main()
{
    print();
    cout << "\n";
    int s = sum(2, 3);
    cout << s;

    return 0;
}
