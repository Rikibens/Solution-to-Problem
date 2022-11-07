// Prob1_11462.cpp : Age Sort


#include <iostream>
#include <iomanip>
#include <math.h>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    long long input;
    while (cin >> input && input != 0) {
        vector<long long>v{};
        long long n;
        for (size_t i = 0; i < input; i++)
        {
            cin >> n;
            v.push_back(n);
        }
        sort(v.begin(), v.end());

        for (size_t i = 0; i < input; i++)
        {
            cout << v[i];
            if (i < input-1)
                cout << " ";
        }
        cout << endl;
    }
}
