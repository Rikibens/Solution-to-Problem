// Implement strStr.cpp 

#include <iostream>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int strStr(string haystack, string needle) {
	if (needle == " ")
	{
		return 0;
	}
	size_t found = haystack.find(needle);
	if (found != string::npos)
		return found;
	else
		return -1;

};
int main()
{
	
	string str = "Hello From the other side";
	string str1 = "he";
	cout << strStr(str, str1);

}

