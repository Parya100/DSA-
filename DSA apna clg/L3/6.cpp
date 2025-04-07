#include <iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter the n : ";
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        sum+=i;
      if (i==5)
      {
        cout<<"your contion  is break\n";
        break;
      }
      
    }
      cout<<"sum is : "<<sum;
    return 0;
}