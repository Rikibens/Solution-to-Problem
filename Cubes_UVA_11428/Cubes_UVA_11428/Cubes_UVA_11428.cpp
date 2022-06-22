// Cubes_UVA_11428.cpp

#include <iostream>
#include <cmath>
using namespace std;

int main()
{

	int N=0;
	bool res[10000]={};
	int xr[10000] = {};
	int yr[10000] = {};
	for (size_t x = 2; x < 60 ; x++)
	{
		for (size_t y = 1; y < x ; y++) {
			N = pow(x, 3) - pow(y, 3);
			if (N<10000 && !res[N]){
				res[N]=true;
				xr[N]=x;
				yr[N]=y;
			}

		}
	}

	int input;
	while (cin >> input && input !=0 )
	{
		if (res[input])
		{
			cout << xr[input] << " " << yr[input] << endl;
		}
		else
		{
			cout << "No solution" << endl;
		}
		
	}
	return 0;
}