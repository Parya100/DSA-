#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of array : ";
    cin >> size;
    int marks[size];
    for (int i = 0; i < size; i++)
    {
        cin >> marks[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << marks[i] << " ";
    }

    return 0;
}