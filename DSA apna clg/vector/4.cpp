#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size;
    cin>>size;
    vector<int>vec(size);
    //vec.push_back;
    // int size;
    // cin>>size;
     for(int i : vec){
        cin>>i;
    }
    for(int i : vec){
        cout<<i+1<<endl;
    }

    return 0;
}