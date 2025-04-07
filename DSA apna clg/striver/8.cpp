#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int row = n; row >= 1; row--) // Reverse rows
    {
        for (int spc = 1; spc <= n - row; spc++) // Leading spaces increase
        {
            cout << " ";
        }
        for (int col = 1; col <= 4 * row; col++) // Stars decrease with row number
        {
            if (col % 2 == 0)
            {
                cout << " "; // Even columns keep spaces (optional)
            }
            else
            {
                cout << "*"; // Odd columns show stars
            }
        }
        cout << "\n";
    }
   
    return 0;
}
