// Move Zeroes.cpp

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int last = 0, cur = 0;
    for (int cur = 0; cur < nums.size(); cur++)
        if (nums[cur] != 0)
            swap(nums[last++], nums[cur]);
}
    

int main()
{
    vector<int> v{ 0,1,3,4,0,6,7 };
    moveZeroes(v);

    for (auto& i : v)
    {
        cout << i << " ";
    }
}