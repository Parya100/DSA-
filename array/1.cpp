#include <iostream>
using namespace std;
int main(){
    int n[4]={4,5,4,3};
    n[0]=100;
    cout<<n[0]<<endl;
    cout<<n[1]<<endl;
    cout<<n[2]<<endl;
    cout<<n[3]<<endl;

   cout<<"size of array "<<sizeof(n)/sizeof(int);
    return 0;
}