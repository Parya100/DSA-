#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the n ";
    cin>>n;
    int count = 1,sum = 0;
    while (count<=n)
    {
        sum+=count;
        count+=1;
    }
    cout<<"Sum is "<<sum;
cout<<endl;
    return 0;
}