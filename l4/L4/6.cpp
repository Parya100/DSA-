#include <iostream>
using namespace std;
int main(){
    
    for (int i = 1; i <=6; i++)
    {
        for (int j = 1; j <=i-1; j++)
        {
            cout<<" ";
        }
        for (int k = 1; k < 6-i ; k++)
        {
            cout<<i;
        }
        cout<<endl;
    }
    
    return 0;
}