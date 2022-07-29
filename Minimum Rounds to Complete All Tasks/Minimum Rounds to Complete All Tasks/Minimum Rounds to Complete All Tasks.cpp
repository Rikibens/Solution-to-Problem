// Minimum Rounds to Complete All Tasks.cpp 

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int minimumRounds(vector<int>& tasks) {

   
	unordered_map<int, int> count;
	int res = 0;
	for (auto& i : tasks)
	{
		++count[i];
	}
	for (auto& i : count)
	{
		if (i.second == 1) return -1;
		res += (i.second + 2) / 3;
	}
	
	return res;
}

int main()
{
	vector <int> v = { 2,2,3,3,2,4,4,4,4,4,4,4,4,4,4,4,4 };
	cout << minimumRounds(v);
}

