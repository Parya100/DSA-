// #include <iostream>
// #include <string>
// using namespace std;
// int main() {
//     std::string N;
//     std::cin >> N;

//     std::string odds, evens;

//     // Separate odd and even digits
//     for (char digit : N) {
//         if ((digit - '0') % 2 == 1) {
//             odds += digit;  // odd digit
//         } else {
//             evens += digit; // even digit
//         }
//     }

//     // Concatenate odd and even digits
//     std::string result = odds + evens;

//     // Print the result
//     std::cout << result << std::endl;

//     return 0;
// }
#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;    //Reading input from STDIN
	// cout << "Input number is " << num << endl;	// Writing output to STDOUT

	int odd = 0, even = 0;
	int place1 = 1, place2 = 1;

	int temp = num;
	while(temp > 0)
	{
		int rem = temp % 10;
		if(rem % 2 == 0)
		{
			even += rem * place2;
			place2 *= 10;
		}
		else {
			odd += rem * place1;
			place1 *= 10;
		}

		temp /= 10;
	}

	int ans ;
	if(even == 0 && odd != 0)
	{
		ans = odd * place2;
	}
	else if(even == 0) {
		ans = odd;
	}
	else if(odd == 0)
	{
		ans = even;
	}
	else {
		ans = odd * place2 + even;
	}

	cout<<ans;

	return 0;
}