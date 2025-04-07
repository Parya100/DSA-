#include <iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={1,2};
    vec.push_back(10);
    vec.push_back(10);
    vec.push_back(10);
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;

    return 0;
}