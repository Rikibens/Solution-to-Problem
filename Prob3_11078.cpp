//Open Credit System.cpp 
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

	while (t--)
	{
		int n{};
		cin >> n;
		vector<int> vec{}; 
		for (size_t i = 0; i < n; i++)
		{
			int s{};
			cin >> s;
			vec.push_back(s);
		}
		long int ans = vec[0]; long int dif = vec[0] - vec[1];
		for (size_t i = 1; i < vec.size(); ++i)
		{
			//save highest - the lowest
			if (dif < ans - vec[i])
				dif = ans - vec[i];
			if (ans < vec[i])
				ans = vec[i];
		}
		cout << dif<<endl;
	}
	return 0;
}
