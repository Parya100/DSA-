#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec = {1, 2, 3, 4,5};
    cout<<"size = "<<vec.size()<<endl;
    vec.push_back(6);
    for (int i : vec)
    {
        cout << i;
    }
    cout<<endl;


    // vector<char> chart = {'a', 'b', 'c', 'd', 'e'};
    // for (char i : chart)
    // {
    //     cout << i;
    // }

    return 0;
}