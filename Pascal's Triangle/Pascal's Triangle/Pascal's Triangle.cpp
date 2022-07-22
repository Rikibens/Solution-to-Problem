// Pascal's Triangle.cpp

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> pas(numRows);
    if (numRows >=1)
    {
        pas[0].push_back(1);
    
    }
    if (numRows >= 2)
    {
        pas[1].push_back(1); pas[1].push_back(1);
       
    }
    

    for (size_t i = 2; i <numRows ; i++)
    {
        pas[i].push_back(1);
        for (size_t j = 1; j < i; j++)
        {
            pas[i].push_back(pas[i-1][j-1] + pas[i - 1][j]);
        }
        pas[i].push_back(1);
    }

    return pas;
}

int main()
{

 
}
