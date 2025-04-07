#include <iostream>
using namespace std;
int main(){
    int mark[5]={1,2,3,4,5};
    int  size=5;
    int smallest=INT8_MAX;
    for (int i = 0; i < size; i++)
    {
        if (mark[i]<smallest)
        {
          smallest=mark[i];
        }
        
        
    }
     cout<<smallest<<" is smallest";
    return 0;
}