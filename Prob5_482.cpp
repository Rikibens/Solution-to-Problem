// Prob4_482.cpp :  Permutation Arrays

#include <iostream>
#include <iomanip>
#include <math.h>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <sstream>

using namespace std;

int main()
{
    int c;
    string str;
    cin>>c;
    getchar();
    while (c--) {
        // flush input
        getchar();

        int arr[5000], n = 1, i = 1;
        string s[5000];

        getline(cin, str);
        stringstream sin;
        sin << str;

        while (sin >> arr[n])
            n++;
        getline(cin, str);

        sin.clear();
        sin << str;
        while (sin >> s[arr[i]])
            i++;
        for (i = 1; i < n; i++)
            cout << s[i] << endl;
        if (c)// output endl with null char
            puts("");
    }
    return 0;
}

