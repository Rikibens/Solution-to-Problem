// Quirksome Squares.cpp 
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	int n; 
	while (cin >> n)
	{	
				int s = pow(10, n);
				int q = pow(10, n/2);
				for (size_t i = 0; i*i < s; i++)
				{
					int sum = i*i;
					int number = (sum/ q) + (sum % q);
					number = number * number;
					if (sum == number)
						cout << setw(n) << setfill('0') << number<<endl;
					
				}
		
	}
}

