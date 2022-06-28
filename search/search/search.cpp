// Binary search.cpp 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int search(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    int l = 0; int h = nums.size() - 1;
    int m ;
    while (l <= h)
    {
        m = (l + h) / 2;
        if (nums[m] > target)
        {
            h = m - 1;
        }
        else if (nums[m] < target)
        {
            l = m + 1;
        }
        else return m;
    
    
    }

}

int main()
{
    
}

