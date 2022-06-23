// Count Odd Num.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

int countOdds(int low, int high)
{
    if (low % 2 == 1)
    {
        return (high - low) / 2 + 1;
    }
    else if (low == high && low % 2 == 0)
    {
        return 0;
    }
    else
    {
        low = low + 1;
        return (high - low) / 2 + 1;
    }
}
int main()
{
    cout << countOdds(4, 55);
}

