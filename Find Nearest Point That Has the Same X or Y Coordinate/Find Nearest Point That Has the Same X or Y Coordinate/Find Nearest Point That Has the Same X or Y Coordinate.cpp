// Find Nearest Point That Has the Same X or Y Coordinate.cpp

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
    int index = -1, ans, a, b, prev = 10000;

    for (int i = 0; i < points.size(); i++) {
        a = points[i][0];
        b = points[i][1];
        if (a == x || b == y) {
            ans = min(abs(a - x) + abs(b - y), prev);
            if (prev > ans) {
                index = i;
            }
            prev = ans;


        }
    }


    return index;

};
int main()
{
    std::cout << "Hello World!\n";
}
