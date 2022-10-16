//Eb Alto Saxophone Player.cpp 
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main()
{
    int t{};

    cin >> t;
    cin.ignore(); // flush input space
    while (t--)
    {
        string str;
        string final = "0000000000";
        vector<int> vec(10, 0);
        
        getline(cin, str);

        for (int i = 0; i < str.size(); i++)
        {
            string s = "0000000000";

            switch (str[i]) {
            case'c':
                s[9] = '1';
            case'd':
            case'D':
                s[8] = '1';
            case'e':
            case'E':
                s[7] = '1';
            case'f':
            case'F':
                s[6] = '1';
            case'g':
            case'G':
                s[3] = '1';
            case'a':
            case'A':
                s[2] = '1';
            case'b':
            case'B':
                s[1] = '1';
                if (str[i] >= 'A' && str[i] <= 'G') {
                    s[0] = '1';
                }
                break;
            case'C':
                s[2] = '1';
            }


            for (int j = 0; j < 10; j++)//compare str with final str
                if (final[j] == '0' && s[j] == '1')
                    vec[j]++;

              final = s;

        }

        cout << vec[0];
        for (int i = 1; i < vec.size(); i++)
            cout << " " << vec[i];

        cout << endl;

    }
    return 0;
}
 