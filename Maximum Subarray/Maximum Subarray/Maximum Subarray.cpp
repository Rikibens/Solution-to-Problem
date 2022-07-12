// Maximum Subarray.cpp 

#include <iostream>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSubArray(vector<int>& nums) {
   // sort(nums.begin(), nums.end(),greater<int>());
    int pre = -100000000;
    int cur = 0;
    for (size_t i = 0; i < nums.size(); i++)
    {
        cur += nums[i];
        pre = max(pre, cur);
        if (cur<0)
        {
            cur = 0;
        }
    }
    return pre;
};
int main()
{
    vector<int>v = { 5,4,-1,7,8 };
    std::cout << maxSubArray(v);
}
