// Largest Perimeter Triangle.cpp : 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int largestPerimeter(vector<int>& nums) {
	sort(nums.begin(), nums.end());
    for (int i = nums.size() - 1; i >= 2; i--) {
        if (nums[i] < nums[i - 1] + nums[i - 2])
            return nums[i] + nums[i - 1] + nums[i - 2];
    }
    return 0;
};

int main()
{
	vector<int>v{ 1, 2, 1 };
    std::cout << largestPerimeter(v) << "\n";
}
