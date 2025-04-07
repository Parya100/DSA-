#include <iostream>
using namespace std;
int main(){
    int n[]={1,3,4,5,6,7};
    int target;
    int size=5;
    cout<<"enter a number";
    cin>>target;
    for(int i=0;i<=5;i++){
        if(n[i]==target){
            cout<<"found";
        }
        else{
            cout<<"not";
        }
        cout<<endl;
    }
    return 0;
}