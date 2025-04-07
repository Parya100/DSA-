#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int row = 1; row <= n; row++)
    {
        for (int spc = 1; spc <= n - row; spc++)
        {
            cout << " ";
        }
        for (int col = 1; col <= 2 * row; col++)
        {
            if (col / 2 == 0)
            {
            }
            else
            {
                cout << "*";
            }
        }
        cout << "\n";
    }
   
    return 0;
}