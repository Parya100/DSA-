#include <iostream>
using namespace std;
int main()
{
    int n;
	cout<<"Enter the value ";
    cin >> n;

for(int row=1;row<=n;row++){
		for(int col=0;col<=n-row;col++){
			cout<<"*"<<" ";
		}
		cout<<"\n";	
        }
    

return 0;
}