// multiply String.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int numIdenticalPairs(vector<int>& nums) {
    int count = 0;
    unordered_map <int, int> m;
    // go through the vector
    //for every i save it in the map
    // map[i]++ if we've seen i before
    //remember n = 0 for the first map[i]++
    for (auto& i : nums)
    {
        count += m[i]++;
    }
    return count;
}
int main()
{
    vector<int>v{ 1,3,1,1,2,2 };
    cout << numIdenticalPairs(v);
    
}
