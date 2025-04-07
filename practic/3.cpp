#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        //   cout<<arr[0];
    }
    //  cout<<arr[0];
    //  cout<<arr[1];
    int n = arr[0];
    int m = arr[1];
    int sum = 0;
    int mul=1;
    for (int i = n; i < m; i++)
    {
        // cout<<i;
        sum += i;
        mul*=i;
    }
    cout << sum<<endl;
    cout << mul;
cout<<endl;



    return 0;
}