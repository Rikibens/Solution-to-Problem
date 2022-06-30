// Rotate Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

void rotate(vector<int>& nums, int k) {


    k %= nums.size();// make sure k is less than nums size
    vector<int> rotate(nums.end() - k, nums.end());
    nums.erase(nums.end() - k, nums.end());
    nums.insert(nums.begin(), rotate.begin(), rotate.end());
}


int main()
{
    vector<int> v{ 1,2,3,4,5,6,7 };
     rotate(v, 3);
 
     for (auto& i : v)
     {
         cout << i<<" ";
     }
}
