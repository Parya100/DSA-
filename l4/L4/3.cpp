#include <iostream>
using namespace std;
int main()
{
    int n = 3;
    int num = 1;
    // cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << num << " ";
            num++;
        }

        cout << endl;
        // cout<<i;
    }

    return 0;
}