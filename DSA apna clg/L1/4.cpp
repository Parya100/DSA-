#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums={1,2,3,4};
    int size=nums.size();
    int target=5;
    int count=0;
    for(int val : nums){
        for(int ele : nums){
            if(val+ele==target){
                cout<<val<<" "<<ele;
                count++;
                break;
            }
            if (count==2)
            {
               return 0;
            }
            
        }
        cout<<endl;
    }
    
    
}