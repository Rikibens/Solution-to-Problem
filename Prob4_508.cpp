// Morse Mismatch.cpp 
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

map<string, string> maps;
map<int, string> morse;

//compare original file with cur match
int link(string input, string match)
{
    if (input == match)return 0;
    
    if (input.length() > match.length())
        swap(input, match);
    
    if (input == match.substr(0, input.length()))
        return match.length() - input.length();
    

    return 100000;

}

//decipher the morse code
string decipher(string match)
{
    int curMinLen = 100000;
    int hasMultiSame = -1;
    string ans;

    for (map<string, string>::iterator it = maps.begin(); it != maps.end(); ++it) {
        int cmpResult = link(it->second, match);
        if (!cmpResult && !curMinLen)
            return ans + "!";

        if (cmpResult <= curMinLen)
            ans = it->first;
     
        curMinLen = min(cmpResult, curMinLen);
    }

    if (curMinLen)
        ans += "?";

    return ans;

}

int main()
{
    string str, str1;
    int i, index;
    morse.clear();
    maps.clear();
    while (cin >> str)
    {
        if (str != "*")
        {
            cin >> str1;
            char c = str[0];
            morse[c] = str1;
        }

        else
        {
            index = 0;
            while (cin >> str)
            {
                if (str == "*")
                     break;

                str1 = "";
                for (i = 0; i < str.length(); ++i)
                {
                    char c1 = str[i];
                    string curMorse = morse[c1];
                    str1 = str1.append(curMorse);
                }
                maps[str] = str1;
            }
            while (cin >> str)
            {
                if (str == "*")
                    break;
                
                cout << decipher(str) << endl;
            }

            morse.clear();
            maps.clear();
        }
    }
    return 0;
    
}
