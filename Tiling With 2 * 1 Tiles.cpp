# pepcoding_DP#include<bits/stdc++.h>
using namespace std;

int tile(int n)
{
	if (n == 1)
	{
		return 1;
	}
	if (n == 2)
	{
		return 2;
	}

	int x = tile(n - 1);
	int y = tile(n - 2);
	return x + y;
}

int main()
{
#ifndef ONLINE_jUDGE
	freopen("input2.txt", "r", stdin);
	freopen("output2.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	/*int dp[n + 1];
	dp[1] = 1;
	dp[2] = 2;
	for (int i = 3; i <= n; i++)
	{
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	cout << dp[n];*/

	cout << tile(n);
}
