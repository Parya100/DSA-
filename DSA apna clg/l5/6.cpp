#include <iostream>
using namespace std;

int fac(int n)
{
   int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
       
    }
     return fact;
}
int main()
{
    cout<<fac(3)<<endl;

    return 0;
}