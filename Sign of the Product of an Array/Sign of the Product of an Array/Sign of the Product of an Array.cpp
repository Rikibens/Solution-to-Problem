// Sign of the Product of an Array

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int arraySign(vector<int>& nums) {
	int n=0;
	for (size_t i = 0; i < nums.size(); i++)
	{
		if (nums[i] == 0)return 0;
		if (nums[i] < 0)
		{
			n += 1;
		}
	}
	if (n % 2==0 )
	{
		return 1;
	}
	else 
	{
		return -1;
	}
}
int main()
{
	vector<int> v = { -1,-2,-3,-4,3,2,1 };
	cout << arraySign(v);
}

