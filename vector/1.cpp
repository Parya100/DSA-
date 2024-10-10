#include <iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>act;
    act.push_back(0);
    act.push_back(1);
    act.push_back(2);
    act.push_back(3);
    act.push_back(4);
    act.push_back(5);

cout<<act.size()<<endl;
cout<<act.capacity()<<endl;

    return 0;
}