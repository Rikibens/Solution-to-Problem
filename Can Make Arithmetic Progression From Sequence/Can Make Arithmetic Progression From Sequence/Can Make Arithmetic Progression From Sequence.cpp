// Can Make Arithmetic Progression From Sequence.cpp 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool canMakeArithmeticProgression(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    int prev=arr[0]-arr[1]; 
    for (size_t i = 0; i < arr.size()-1; i++)
    {
        if (arr[i]-arr[i+1]!=prev)
        {
            return false;
        }
        prev = arr[i] - arr[i + 1];
    }
    return true;
}
int main()
{
    vector<int> v{2,1,4};
    cout << canMakeArithmeticProgression(v);
}

