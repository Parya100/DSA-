#include <iostream>
using namespace std;
int main(){
    int n,target;
    cout<<"enter a number ";
    cin>>n;
    target=10*n;
    while (target>0)
    {
        cout<<target<<" ";
        target-=n;
    }
    
    return 0;
}