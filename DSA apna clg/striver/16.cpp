#include <iostream>
using namespace std;
void explaninPair()
{
    pair<int, int> p = {1, 2};
    cout << p.first << " " << p.second;
    // pair<int, pair<int, int>> p = {1, {3, 4}};
    // cout << p.first << " " << p.second;
}
int main()
{
  
    return 0;
}