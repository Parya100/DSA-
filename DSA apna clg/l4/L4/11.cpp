#include <iostream>
using namespace std;
int main(){
    for (int i = 0; i < 7; i++)
    {
       for (int k = i; k > 0 ; k--)
       {
       cout<<" ";
       }
       

       for (int j = i; j > 0 ; j--)
       {
        cout<<j;
       }
       cout<<endl;
    }
    
    return 0;
}