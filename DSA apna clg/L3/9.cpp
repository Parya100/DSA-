#include <iostream>
using namespace std;
int main(){
    int n,oddsum=0;
    cout<<"Enter n ";
    cin>>n;
    //int count =5;
    for (int i = 1; i <= n; i++)
    {
        if (i%2!=0)
        {
            // cout<<i<<"\n";
           oddsum+=i;
        }
        
       
    }
    cout<<oddsum;
    cout<<endl;
    
    return 0;
}