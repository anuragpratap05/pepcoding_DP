# pepcoding_DP#include<bits/stdc++.h>
using namespace std;



int main()
{
#ifndef ONLINE_jUDGE
	freopen("input2.txt", "r", stdin);
	freopen("output2.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int dp[n + 1] ;
	dp[0] = 1;


	for (int i = 1; i < n; i++)
	{
		if (a[i - 1] == 0 and a[i] != 0)
		{
			dp[i] = dp[i - 1];
		}

		else if (a[i - 1] != 0 and a[i] == 0)
		{
			if (a[i - 1] == 1 or a[i - 1] == 2)
			{
				dp[i] = i >= 2 ? dp[i - 2] : 1;
			}
			else
			{
				dp[i] = 0;
			}
		}

		else if (a[i - 1] == 0 and a[i] == 0)
		{
			dp[i] = 0;
		}
		else
		{
			if (a[i - 1] * 10 + a[i] <= 26)
			{
				dp[i] = dp[i - 1] + (i >= 2 ? dp[i - 2] : 1);
			}
			else
			{
				dp[i] = dp[i - 1];
			}
		}
	}

	cout << dp[n - 1];
}
