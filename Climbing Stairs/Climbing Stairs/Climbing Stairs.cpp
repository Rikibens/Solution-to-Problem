// Climbing Stairs.cpp 

#include <iostream>
#include <vector>
using namespace std;


int climbStairs(int n) {

    vector<int> v(n + 2, 0);

    v[0] = 1;
    v[1] = 2;


    for (size_t i = 2; i < n; i++)
    {
        v[i] = v[i - 2] + v[i - 1];
    }
    return v[n - 1];
};
int main()
{
  
    cout<<climbStairs(3);
}

