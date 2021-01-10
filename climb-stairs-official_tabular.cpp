# pepcoding_DP#include<bits/stdc++.h>
using namespace std;

int stairpaths(int n, int* dp)
{
	if (n == 0)
	{
		return 1;
	}
	if (n < 0)
	{
		return 0;
	}
	if (dp[n] != 0)
	{
		return dp[n];
	}

	int path_nm1 = stairpaths(n - 1, dp);
	int path_nm2 = stairpaths(n - 2, dp);
	int path_nm3 = stairpaths(n - 3, dp);

	int total_pat = path_nm3 + path_nm2 + path_nm1;

	dp[n] = total_pat;
	return total_pat;
}

int stairpathstab(int n)
{
	int dp[n];
	dp[0] = 1;
	for (int i = 1; i <= n; i++)
	{
		if (i == 1)
		{
			dp[i] = dp[i - 1];
		}
		else if (i == 2)
		{
			dp[i] = dp[i - 1] + dp[i - 2];
		}
		else
		{
			dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
		}
	}
	return dp[n];
}

int main()
{
#ifndef ONLINE_jUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;

	int* dp = new int[n + 1]();
	//cout << stairpaths(n, dp);

	cout << stairpathstab(n);
}
