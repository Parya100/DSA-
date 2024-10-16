#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> act;
    act.push_back(0);
    act.push_back(1);
    act.push_back(2);
    act.push_back(3);
    act.push_back(4);

    //act.push_back(5);
    
    act.pop_back();
    act.push_back(7);
    act.push_back(8);
    act.push_back(9);
    act.push_back(10);

    cout << act.size() << endl;
    cout << act.capacity() << endl;

    return 0;
}