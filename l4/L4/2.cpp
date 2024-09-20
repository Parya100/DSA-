#include <iostream>
using namespace std;
int main(){
    int n=9;
    //cin>>n;
    for (int  i = 1; i <n; i++)
    {
       // char ch='a';
        for (int j = 1; j < i; j++)
        {
           cout<<j;
           // ch=ch + 1;
        }
        
     // cout<<i;
      cout<<endl;
    }
    
    return 0;
}