#include <iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec;
    int n[]={1,2,3,4,5};
    int size=sizeof(n)/sizeof(int);
    // cout<<size;
    int target=5;
    int a=0;
    int j=size-1;
    for (int i = 0; i <=size-1; i++)
    {
       if(n[i]>target){
        j--;
       }
       if(n[i]<target){
        a++;
       }
       else{
            vec.push_back(a);
            vec.push_back(j);
       }
    }
    cout<<vec[0];
        cout<<vec[1];

    return 0;
}