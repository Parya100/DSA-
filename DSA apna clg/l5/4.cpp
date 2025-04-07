#include <iostream>
using namespace std;

int max(int a, int b)
{
    if (a>b)
    {
       cout<<a<<" is greater";
    }
    else if (a<b){
        cout<<b<<" is greater";
    }
    else
    {
        cout<<a<<" and "<<b<<" is eqqual";
    }
    cout<<endl;
    
}
int main()
{
   
    
    max(2,4);
    max(4,2);
    max(4,4);

    return 0;
}