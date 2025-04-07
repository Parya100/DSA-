#include <iostream>
using namespace std;
int main()
{
    int sz = 5;
    int target=4;
   // cin >> target;

    int arr[] = {1, 2, 3, 4, 5};
    int i = 0;
    while (i <= sz)
    {
        if (arr[i] ==! target)
        {
            cout<<" found ";
           // break;
        }
        else if (arr[i]==target)
        {
          cout<<" not found";
        }
        
        i++;
    }

    return 0;
}