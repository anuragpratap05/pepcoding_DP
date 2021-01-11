# pepcoding_DP#include<bits/stdc++.h>
using namespace std;



int main()
{
#ifndef ONLINE_jUDGE
	freopen("input2.txt", "r", stdin);
	freopen("output2.txt", "w", stdout);
#endif
	//string s = "678";
	int n;
	cin >> n;

	int dp[2][n + 1];
	dp[0][0] = 0;
	dp[1][0] = 0;
	dp[0][1] = 1;
	dp[1][1] = 1;
	for (int i = 2; i <= n; i++)
	{
		dp[0][i] = dp[1][i - 1];
		dp[1][i] = dp[1][i - 1] + dp[0][i - 1];
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}
	int ans = dp[0][n] + dp[1][n];
	cout << ans;
}
