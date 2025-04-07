#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n[]={1,2,3,4};
    int size=sizeof(n)/sizeof(int);
    int target=5;
    for (int i = 0; i <= size-2; i++)
    {
        for (int j = 0; j <=size; j++)
        {
            if (i+j==target)
            {
               cout<<i<<" "<<j;
               break;
            }
        }
       cout<<endl;
    }
    return 0;
    
}