#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int arr[size];
    int count = 0;
    for (int i = 1; i <= size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i <= size; i++)
    {
        for (int i = 1; i < size; i++)

            arr[0] += arr[i];

        cout << arr[0];
    }

    return 0;
}