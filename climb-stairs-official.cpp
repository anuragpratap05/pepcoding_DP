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

int main()
{
#ifndef ONLINE_jUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;

	int* dp = new int[n + 1]();
	cout << stairpaths(n, dp);
}
