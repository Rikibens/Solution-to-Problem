// Pascal's Triangle II.cpp :

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> getrow(int rowIndex) {
    rowIndex++;
    vector<vector<int>> pas(rowIndex);
    if (rowIndex >= 1)
    {
        pas[0].push_back(1);

    }
    if (rowIndex >= 2)
    {
        pas[1].push_back(1); pas[1].push_back(1);

    }


    for (size_t i = 2; i < rowIndex; i++)
    {
        pas[i].push_back(1);
        for (size_t j = 1; j < i; j++)
        {
            pas[i].push_back(pas[i - 1][j - 1] + pas[i - 1][j]);
        }
        pas[i].push_back(1);
    }

    return pas[rowIndex-1];
}
int main()
{
    getrow(3);
}
