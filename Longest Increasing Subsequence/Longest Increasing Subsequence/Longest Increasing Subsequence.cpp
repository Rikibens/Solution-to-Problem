// Longest Increasing Subsequence.cpp 
#include <iostream>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int lengthOfLIS(vector<int>& nums) {
	int n = nums.size();

	vector <int> v(  n ,1 );
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < i; j++)
		{
			if (nums[i] > nums[j] && v[i] < v[j] + 1)
			{
				v[i] = 1 + v[j];
			}
		}
	}
	return *max_element(v.begin(), v.end());
}

int main()
{

	vector<int> v{ 2,4,5,6,7,2,3,2,4 };
	cout<<lengthOfLIS(v);
	
}