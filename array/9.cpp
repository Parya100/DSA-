#include <iostream>
using namespace std;
void reverseArray(int arr[], int sz)
{
    int start = 0, end = sz - 1;
    while (start < end)     //(start <= end) for odd
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int arr[] = {2, 3, 4, 5, 6, 7};
    int sz = 6;
    reverseArray(arr, sz);
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}