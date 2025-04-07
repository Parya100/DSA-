#include <iostream>
using namespace std;
int main(){
    int nums[]={1,2,3,6,7,0,-12};
    int size=7;
    int smallest= INT8_MAX;
    int largest=INT8_MIN;
for (int i = 0; i <size; i++)
{
 if(nums[i]<smallest){
    smallest=nums[i];
 }
}
cout<<" smallest = "<<smallest<<endl;
    
    return 0;
}