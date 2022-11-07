// Prob5_110.cpp : Meta-Loopless Sorts

#include <iostream>
#include <iomanip>
#include <math.h>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <sstream>


using namespace std;

int n;

void meta(int pos, string str)
{
    if (pos == n) {
        cout << string(pos * 2, ' ').c_str() << "writeln(";

        for (int i = 0; i < pos - 1; ++i)
            cout<<  str[i] << ",";

       cout<<str[pos - 1]<<")" << endl;

        return;
    }

    string s;

    for (int i = pos - 1; i >= 0; --i) {
        cout<< string(pos * 2, ' ').c_str();

        if (i != pos - 1) 
            cout<<"else ";
        cout<<"if " <<str[i]<<" < " << static_cast<char>('a' + pos) << " then" << endl;

        s = str;

        if (i + 1 > pos - 1) s.push_back('a' + pos);
        else s.insert(i + 1, 1, 'a' + pos);

        meta(pos + 1, s);
    }

    cout << string(pos * 2, ' ').c_str();
    //buffer else
    puts("else");
    meta(pos + 1, static_cast<char>('a' + pos) + str);
}

int main()
{


    int c;
    cin >> c;

    while (c--) {
        cin>>n;
        
        puts("program sort(input,output);\nvar");

        for (int i = 0; i < n - 1; ++i)
            cout<< static_cast<char>('a' + i) << ",";

       cout<< static_cast<char>('a' + n - 1) << " : integer;" << endl;
       cout << "begin" << endl;  
       cout<<"  readln(";

        for (int i = 0; i < n - 1; ++i)
            cout<< static_cast<char>('a' + i) << ",";

        cout<<static_cast<char>('a' + n - 1) << ");" << endl;

        meta(1, string("a"));

        puts("end.");

        if (c) 
            cout<<endl;
    }

    return 0;
}
