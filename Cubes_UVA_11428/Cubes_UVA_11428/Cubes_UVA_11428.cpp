// Cubes_UVA_11428.cpp

#include <iostream>

#include <cmath>
using namespace std;

int main()
{
	int input;
	while (cin >> input && input !=0 )
	{
		int N = input;
		for (size_t x = 1; x < input/2; x++)
		{
			for (size_t y = 1; y < input/2; y++) {
				
				if ( N== pow(x, 3) - pow(y, 3))
				{

					cout << x << " "<<y<< endl;
					goto answer;
				}
				
			}

		}

		
		
	answer:
		cout << endl;
		
		
		
	}
}