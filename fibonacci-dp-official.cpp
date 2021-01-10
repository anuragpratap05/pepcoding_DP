#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{

	int * qb = new int[n + 1]();

	if (n == 0 or n == 1)
	{
		return n;
	}

	if (qb[n] != 0)
	{
		return qb[n];
	}
	int fibnm1 = fibonacci(n - 1);
	int fibnm2 = fibonacci(n - 2);
	int fibn = fibnm1 + fibnm2;
	qb[n] = fibn;
	return fibn;
}
int main()
{
#ifndef ONLINE_jUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	cout << fibonacci(n);
}
