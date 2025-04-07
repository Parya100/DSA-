#include <iostream>
using namespace std;
int main(){
    int mark[5]={1,2,3,4,5};
    int  size=5;
    int largest=INT8_MIN;
    for (int i = 0; i < size; i++)
    {
        if (mark[i]>largest)
        {
          largest=mark[i];
           
        }
         
        cout<<mark[i];
           break;
    }
    
     cout<<largest<<" is bigest";
    
    return 0;
}