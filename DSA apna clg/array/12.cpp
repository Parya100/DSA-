#include <iostream>
using namespace std;
string name(int size){
   // int size=2;
    string arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
        
    }
     return arr[size];
   
}
int main(){
    int size;
    cin>>size;
   cout<<name(size);
    
        //cout<<arr[i]<<endl;
    
    
    return 0;
}