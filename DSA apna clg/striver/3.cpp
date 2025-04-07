#include <iostream>
using namespace std;
int main(){
    int n[]={4,6,7,9,5,2,1,2,3,4,9};
    int target ;
    cout<<"enter the element";
    cin>>target;
    int size=11;

    for (int i = 0; i <=size; i++)
    {
       if( n[i]==target){
        cout<<"number is found"<<endl;
        break;
       }
      if(n[i]==size){
        cout<<"is not found"<<endl;
        break;
    }
     
       }
    return 0;
}

