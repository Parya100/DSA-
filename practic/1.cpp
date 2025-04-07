#include <iostream>
#include<vector>
using namespace std;
int main(){
  //  vector<int>vec(4,0);
  int size=5;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
       cin>>arr[i];
    }
     for (int i = size; i > 0; i--)
    {
       cout<<arr[i];
    }
    
    
    return 0;
}