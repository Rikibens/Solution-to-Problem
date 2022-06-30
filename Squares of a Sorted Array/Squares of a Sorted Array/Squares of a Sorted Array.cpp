// Squares of a Sorted Array.cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
	for (size_t i = 0; i < nums.size(); i++)
	{
		nums[i] *= nums[i];
	}
	sort(nums.begin(), nums.end());

	return nums;
}
int main()
{
    
}
