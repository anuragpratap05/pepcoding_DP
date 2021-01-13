# pepcoding_DP#include<bits/stdc++.h>
using namespace std;


int main()
{
#ifndef ONLINE_jUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n ;

	int dp[n + 1];
	dp[1] = 1;
	dp[2] = 2;

	for (int i = 3; i <= n; i++)
	{
		dp[i] = dp[i - 1] + (i - 1) * dp[i - 2];
	}
	cout << dp[n];


}
