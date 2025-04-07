#include <iostream>
using namespace std;
int main(){
int size = 3;
int max=0;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
       cin>>arr[i];
    }

    cout<<endl;

    for (int i = 0; i < size; i++)
    {
       //cout<<arr[i];
       if (arr[i]>max)
       {
        max=arr[i];

       }
       
       //break;
    }

cout<<max;
    return 0;
}