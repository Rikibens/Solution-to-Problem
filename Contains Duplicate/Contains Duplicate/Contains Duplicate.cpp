// Contains Duplicate.cpp 
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>

using namespace std;


bool containsDuplicate(vector<int>& nums) {
    set<int>s(nums.begin(), nums.end());
    vector<int> v(s.begin(), s.end());
    sort(nums.begin(), nums.end());
    if (v != nums)return true;

    return false;
}

int main()
{
    
}
