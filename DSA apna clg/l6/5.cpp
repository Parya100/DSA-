#include <iostream>
using namespace std;
int main(){
    int nums[]={1,2,3,6,7,0,-12};
    int size=7;
    int smallest= INT8_MAX;
    int largest=INT8_MIN;
for (int i = 0; i <size; i++)
{
smallest=min(nums[i],smallest);
largest=max(nums[i],largest);
}
cout<<" smallest = "<<smallest<<endl;
cout<<" lardrsy= "<<largest<<endl;
    
    return 0;
}