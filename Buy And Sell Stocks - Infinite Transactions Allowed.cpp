# pepcoding_DP#include<bits/stdc++.h>
using namespace std;


int main()
{
#ifndef ONLINE_jUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	int bd = 0;
	int sd = 0;
	int profit = 0;
	for (int i = 1; i < n; i++)
	{
		if (a[i] >= a[i - 1])
		{
			sd++;
		}
		else
		{
			profit += a[sd] - a[bd];
			bd = sd = i;
		}
	}
	profit += a[sd] - a[bd];
	cout << profit;

}
