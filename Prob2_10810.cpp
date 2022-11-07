// Prob2_10810.cpp :  Ultra-QuickSort
#include <iostream>
#include <iomanip>
#include <math.h>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;



int v1[500001];
int v2[500001]; 
long long c;

//quicksort fx taking an vec to its mid apply quick
void qs(int* vec, int len, int dis)
{
    if (len > 1)
    {
        int* r = v1 + dis;
        if (r == vec)
            r = v2 + dis;

        for (int i = 0; i < len; ++i)
            r[i] = vec[i];
        // initialize first Right and Second Left value
        int firstL = len / 2;
        int secondS = firstL;
        int secondL = len - secondS;
        int* l = r + secondS;

        qs(r, firstL, dis);
        qs(l, secondL, dis + secondS);

        int i = 0, j = 0, pos = 0;
        while (i < firstL && j < secondL)
        {
            if (r[i] < l[j]) {
                vec[pos++] = r[i++];
            }
            else
            {
                vec[pos++] = l[j++];
                c += firstL - i;
            }
        }

        for (; i < firstL; ++i, ++pos)
            vec[pos] = r[i];
        for (; j < secondL; ++j, ++pos)
            vec[pos] = l[j];
    }
}

int main()
{
    int n;

    while (cin >> n && n != 0)
    {
        for (int i = 0; i < n; ++i)
            cin >> v1[i];

        qs(v1, n, 0);

        cout << c << endl;
        c = 0;
    }
}