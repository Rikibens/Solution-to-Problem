//Solve it.cpp
#include <iostream>
#include <iomanip>
#include <math.h>
#include <vector>
#include <string>

using namespace std;

int p, q, r, s, t, u;

double f(double x) {
	return	
		p * exp(-x) +
		q * sin(x) +
		r * cos(x) +
		s * tan(x) +
		t * x * x + u;
}

int main()
{
	while (cin >> p >> q >> r >> s >> t >> u)
	{
		double upper{ 1 }, mid{0}, lower{ 0 };
			// if x out of bound no solution
			if (f(upper) * f(lower)>0)
			{
				cout << "No solution" << endl;
				continue;
			}
			// itereate until it finds the result for upper and lower bound
			while (upper - lower > 1e-7)
			{
				mid = (upper + lower) / 2;
				if (f(mid) < 0)
					upper = mid;
				else
				{
					lower = mid;
				}
			}
			cout << setprecision(4) << fixed << mid << endl;
	}




	return 0;
}

