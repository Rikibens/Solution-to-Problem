// Fibonacci using Binet formula
//

#include <iostream>
#include <cmath>
using namespace std;


long long int fib(int n) {

	return round(pow((1 + sqrt(5)) / 2, n) / sqrt(5));

};

int main()
{
	int input;
	while (cin>> input)
	{
		cout << fib(input) << endl;;
	}
   
}