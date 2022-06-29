// Search Insert Position.cpp

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
int searchInsert(vector<int>& nums, int target) {
    int l=0; int r=nums.size()-1;
	nums.push_back(target);
	set<int>s (nums.begin(), nums.end());
	nums.clear();
	nums.assign(s.begin(), s.end());
	sort(nums.begin(), nums.end());

	while (l<=r)
	{
		int mid = l + (r - l ) / 2;
		if (nums[mid] > target)
		{
			r = mid - 1;
		}
		else if (nums[mid] < target)
		{
			l = mid + 1;
		}
		else
			return mid;
	}
	return l;

};
int main()
{

	vector<int> v{1,3,5,6};
	cout << searchInsert(v,5);
}
