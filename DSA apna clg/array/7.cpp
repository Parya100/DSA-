#include <iostream>
using namespace std;
int LinearSearch(int arr[], int sz, int target)
{
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] == target)
        {
           cout<<"found"<< i;
        }
        else
        {
            cout<<"not found";
        }
        
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 5, 6, 8};
    int sz = 5;
    int target;
    cin>>target;
    cout << LinearSearch(arr, sz, target) << endl;

    return 0;
}