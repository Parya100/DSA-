#include <iostream>
using namespace std;

int main() {
    int n = 5;  // Initial number of stars
for (int i = 0; i < n; i+)
{
    for (int k = 1; k <=(n-i)/2; k++)
    {
       cout<<" ";
    }
    
    for (int j = 1; j <=2*i-1; j++)
    {
        cout<<"*";
    }
    cout<<endl;
    
 }

    
    for (int i = n; i >= 1; i -= 2) {
        
        for (int j = 1; j <= (n - i) / 2; j++) {
            cout << " ";
        }
       
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
      
        cout << endl;
    }
	 

    return 0;
}
