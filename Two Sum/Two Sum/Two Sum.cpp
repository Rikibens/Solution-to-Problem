// Two Sum.cpp 
#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> v;
    unordered_map<int, int> m;
    for (int i = 0; i < nums.size(); i++)
    {
        if (m.find(target - nums[i]) != m.end())
        {
            v.push_back(m[target - nums[i]]);
            v.push_back(i);
            return v;
        }
        else
            m[nums[i]] = i;
    }
    return v;

}


int main()
{
    vector<int> v{ 3,2,4 };
    twoSum(v,5);
}
