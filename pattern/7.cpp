#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int  i = 0; i <= n; i++)
    {
        char v='A'+i;
        for (int ch = 0; ch <= i; ch++)
        {
           cout<<v;
        }
        cout<<endl;
    }
    
    return 0;
}