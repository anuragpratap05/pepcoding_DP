# pepcoding_DP#include<bits/stdc++.h>
using namespace std;

int min_stairpathstab(int n, int *a , int* dp)
{
	dp[n] = 0;
	for (int i = n - 1; i >= 0; i--)
	{
		if (a[i] > 0)
		{
			int mini = INT_MAX;
			for (int j = 1; j <= a[i] and i + j <= n; j++)
			{
				mini = min(mini, dp[i + j]);
			}
			dp[i] = mini + 1;
		}
	}
	return dp[0];
}

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



	int* dp = new int[n + 1]();
	for (int i = 0; i <= n; i++)
	{
		dp[i] = INT_MAX;
	}
	//cout << stairpaths(n, dp);

	cout << min_stairpathstab(n, a, dp);
}
