#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i <=6 ; i++)
    {
       for (int j = 0; j < i; j++)
       {
        cout<<" ";
       }
       for (int k = 0; k < 6-i; k++)
       {
        cout<<i;
       }
       cout<<i<<endl;
    }
    cout<<endl;

    return 0;
}