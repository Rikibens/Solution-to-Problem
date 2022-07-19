// Best Time to Buy and Sell Stock.cpp

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int maxProfit(vector<int>& prices) {
	int buy = prices[0];
	vector<int> profit;
	if (prices.size() <=1)
	{
		return 0;
	}
	for (size_t i = 1; i < prices.size(); i++)
	{
		if (buy > prices[i])buy = prices[i];
		profit.push_back(prices[i]- buy);
		
		
	}
	auto p = *max_element(profit.begin(), profit.end());
	if (p <= 0)
		return 0;
	else
		return p; 
}


int main()
{
	vector<int> v{ 7,1,5,3,6,4 };
	maxProfit(v);
}
