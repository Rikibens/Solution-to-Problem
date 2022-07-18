// Merge Sorted Array.cpp 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

    nums1.erase(nums1.begin() + m, nums1.end());
    nums1.insert(nums1.begin(), nums2.begin(),nums2.end());
    sort(nums1.begin(), nums1.end());
    
}


int main()
{
    std::cout << "Hello World!\n";
}
