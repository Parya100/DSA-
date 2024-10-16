#include <iostream>
using namespace std;
// void explainPair(){
//     pair<int ,int >p={1,3};
// }
int main()
{
    pair<int, int> r = {1, 2};
    cout << r.first << " " << r.second << endl;
    pair<int, pair<int, int>> p = {1, {2, 3}};
    cout << p.first << " " << p.second.second << " " << p.second.first << endl;
    pair<int, int> arr[] = {{1, 2}, {2, 3}, {3, 4}};
    cout << arr[1].first;

    return 0;
}