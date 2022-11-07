// Prob3_263.cpp : Number Chains

#include <iostream>
#include <iomanip>
#include <math.h>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <sstream>

using namespace std;

//compare Char
bool cmpC(char c1, char c2) {
    return c1 > c2;
}

// convert string to number
long long str_to_ll(string str) {
    stringstream ss;
    long long num;
    ss << str;
    ss >> num;
    return num;
}

// convert number to string
string ll_to_str(long long n) {
    stringstream ss;
    string s;
    ss << n;
    ss >> s;
    return s;
}

int main() {
    string str;
    long long n1, n2;
    set<long long> visited;

    while (getline(cin, str) && str != "0") {
        visited.clear();

        cout << "Original number was "<< str.c_str()<<endl;
        while (true) {
            //sort n1
            sort(str.begin(), str.end(), cmpC);
            n1 = str_to_ll(str);
            //sort n2
            sort(str.begin(), str.end());
            n2 = str_to_ll(str);

            cout<<n1<< " - " <<n2 <<" = "<< n1 - n2<<endl;

            if (visited.find(n1 - n2) != visited.end()) 
                break;

            visited.insert(n1 - n2);

            str = ll_to_str(n1 - n2);
        }
        cout<<"Chain length "<< visited.size() + 1<<endl;
        cout << endl;
    }
    return 0;
}