// Binary Fibonacci String.cpp : 
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;
vector<long long>f(50);

//normal fib with the char and then slice
void fib(int n, long long l, long long r) {
    if (l > r)   return;
    if (n == 0)  putchar('0');
    else if (n == 1)  putchar('1');
    else {
        if (l < f[n - 2]) {
            fib(n - 2, l, min(r, f[n - 2] - 1));
            fib(n - 1, 0, r - f[n - 2]);
        }
        else {
            fib(n - 1, l - f[n - 2], r - f[n - 2]);
        }
    }
}

int main() {
    int t;
    long long n{}, i{}, j{};
    f[0] = 1, f[1] = 1;
    
    for (i = 2; i <= 50; i++)
        f[i] = f[i - 1] + f[i - 2];
    cin >> t;
    while (t--) {
        cin >> n >> i >> j;
        if (n >= 48)// manage overflow
            n = 48 - (n % 2);
        fib(n, i, j);
        puts("");
    }
    return 0;
}