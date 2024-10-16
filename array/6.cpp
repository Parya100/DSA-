#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of array : ";
    cin >> size;
    int mark[size];
    int largest = INT8_MIN;
    for (int i = 0; i < size; i++)
    {
        cin >> mark[i];
    }

    for (int i = 0; i < size; i++)
    {
      if (mark[i]>largest)
      {
        largest=mark[i];
      }
     
      // break;
    }
 cout<<"The bigest number is : "<<largest;
    return 0;
}