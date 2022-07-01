// reverse words.cpp 



#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

string reverseWords(string s) {
	
	size_t begin = 0;
	for (size_t i = 0; i <= s.length(); i++)
	{
		if (s[i] == ' ' || i == s.length())
		{
			reverse(&s[begin], &s[i]);
			begin = i + 1;
		}
		
	}
    
    return s;
}

int main()
{
	string s;
	s = "Let's take LeetCode contest";
	
	cout << reverseWords(s);;
}