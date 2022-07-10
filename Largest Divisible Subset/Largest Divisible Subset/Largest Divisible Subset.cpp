// Largest Divisible Subset.cpp : T

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;


vector<int> largestDivisibleSubset(vector<int>& nums) {
	int n = nums.size(), max_i= 0;
	if (n == 0)
		return{};
	sort(nums.begin(), nums.end());
	vector<int> v(n,1);
	vector<int> p(n, -1),ans;
	for (size_t i = 1; i < n; i++)
	{
		for (size_t j = 0; j < i; j++)
		{
			if (nums[i] % nums[j] == 0 && v[i] < v[j] + 1)
			{
				v[i] = v[j] + 1;
				p[i] = j;
			}
			if (v[i] > v[max_i]) max_i = i;
			
		}
	}
	for (; max_i >= 0; max_i = p[max_i])
		ans.push_back(nums[max_i]);
	return ans;

};





int main()
{



}