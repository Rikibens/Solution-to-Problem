// Plus one.cpp

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


vector<int> plusOne(vector<int>& digits) {
	int i = digits.size();
	while (i--)
	{
		if (digits[i] == 9)
		{
			digits[i] = 0;
			
		}
		else {
			digits[i] +=1;
			return digits;
		}
	}
	digits.push_back(0);
	digits[0] = 1;
	return digits;
};


int main()
{
	vector <int> v{9};
	plusOne(v);
	cout << "[";
	for (auto& i : v)
	{
		cout <<i << ",";
		
	}
	cout << "]";
}
