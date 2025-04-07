#include <iostream>
using namespace std;
int main(){
    int n,oddsum=0,i=0;
    cin>>n;
    while (i<=n)
    {
        if (i%2!=0)
        {
          //  cout<<i<<"\n";
          oddsum+=i;
        }
        i++;
    }
    cout<<oddsum;
    return 0;
}