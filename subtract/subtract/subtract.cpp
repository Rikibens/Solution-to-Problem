// subtract the product and the sum
#include <iostream>
#include <cmath>


int subtractProductAndSum(int n) {
		int sum = 0, product = 1;
		while (n > 0)
		{
			sum += n % 10;
			product *= n % 10;
			n = n / 10;
		}
		return product - sum;
};
using namespace std;
int main()
{
	cout<<subtractProductAndSum(12454);
}