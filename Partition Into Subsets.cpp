# pepcoding_DP#include<bits/stdc++.h>
using namespace std;


int main()
{
#ifndef ONLINE_jUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, k;
	cin >> n >> k ;

	int dp[k + 1][n + 1];

	for (int i = 0; i <= k; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			dp[i][j] = 0;
		}
	}

	for (int t = 1; t <= k; t++)
	{
		for (int p = 1; p <= n; p++)
		{
			if (p < t)
			{
				dp[t][p] = 0;
			}
			else if (p == t)
			{
				dp[t][p] = 1;
			}
			else if (t == 1)
			{
				dp[t][p] = 1;
			}
			else
			{
				dp[t][p] = dp[t ][p - 1] * t + dp[t - 1][p - 1];
			}
		}
	}
	for (int i = 0; i <= k; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			cout << dp[i][j] << " " ;
		}
		cout << endl;
	}





}
