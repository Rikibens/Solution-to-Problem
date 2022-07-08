// /monotonic-array.cpp /

#include <iostream>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool isMonotonic(vector<int>& nums) {
	vector<int> v{ nums.begin(), nums.end() };
	vector<int> v1{ nums.begin(), nums.end() };
	sort(v.begin(), v.end());
	sort(v1.begin(), v1.end(),greater<int>());
	if (v == nums || v1 == nums)
		return true;
	else
		return false;
};
int main()
{
	vector<int> v{1,2,3,4,5,5};
	cout << isMonotonic(v);


}

