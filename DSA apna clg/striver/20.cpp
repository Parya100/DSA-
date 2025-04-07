#include <iostream>
using namespace std;
int prime(int n){
    
 int count = 0;
    for (int i = 1; i <= n; i++)
    {

        if (n % i == 0)
        {
           // cout<<i<<" "<<endl;
            count++;
        }

        
    }
    if (count== 2)
        {
            cout << "prime";
        }
   else {
    cout<<"not prime";
   }     
   return 0;
}
int main()
{
    int n;
    cin >> n;
    cout<<prime(n);
//     int count = 0;
//     for (int i = 1; i <= n; i++)
//     {

//         if (n % i == 0)
//         {
//            // cout<<i<<" "<<endl;
//             count++;
//         }

        
//     }
//     if (count== 2)
//         {
//             cout << "prime";
//         }
//    else {
//     cout<<"not prime";
//    }     

    return 0;
}