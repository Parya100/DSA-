#include <iostream>
using namespace std;
int decToBinary(int decNum){
 int ans=0;
    int pow=1;
    while (decNum>0)
    {
       int rem=decNum%2;
     decNum/=2;

     ans+=(rem * pow);
     pow*=10;
    }
    return  ans;
}
int main(){
    int num;
    cin>>num;
   int decNum =50;
   for (int i = 1; i <= 10; i++)
   {
     cout<<decToBinary(i)<<endl;
   }
   
//    cout<<decToBinary(num)<<endl;
    
    return 0;
}