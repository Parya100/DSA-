#include <iostream>
using namespace std;
int prime(int n){
    {
    
    int count = 0;
    for (int i = 1; i <= 10; i++)
    {
        if (n % i == 0)
        {
           // cout << i<<" ";
            count++;
        }
       
    }
     //cout<<endl;
    if (count <= 2)
    {
        cout << "number is prime " << endl;
    }
    else if (count > 2)
    {
        cout << "number is not prime ";
    }
    return  count;
}
}
int main(){
    int number;
    cin>>number;
    cout<<prime( number );
    return 0;
}