#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int num=0;
    // cin>>n;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            num+=1;
            cout << num;
        }
       cout << num;
     //  cout << num;
        cout << endl;
    }

    return 0;
}