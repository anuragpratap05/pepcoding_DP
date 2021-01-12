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

	int a[n][3];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> a[i][j];
		}
	}

	int dp[n][3];
	dp[0][0] = a[0][0];
	dp[0][1] = a[0][1];
	dp[0][2] = a[0][2];

	for (int i = 1; i < n; i++)
	{
		dp[i][0] = a[i][0] + min(dp[i - 1][1], dp[i - 1][2]);
		dp[i][1] = a[i][1] + min(dp[i - 1][0], dp[i - 1][2]);
		dp[i][2] = a[i][2] + min(dp[i - 1][0], dp[i - 1][1]);
	}
	cout << min(dp[n - 1][0], min(dp[n - 1][1], dp[n - 1][2]));
}
