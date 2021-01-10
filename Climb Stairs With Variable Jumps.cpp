# pepcoding_DP#include<bits/stdc++.h>
using namespace std;

int stairpathstab(int n, int a[], int*  dp)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "  ";
	}
	cout << endl;
	dp[n] = 1;
	for (int i = n - 1; i >= 0; i--)
	{
		if (a[i] > 0)
		{
			for (int j = 1; j <= a[i] and i + j <= n; j++)
			{
				dp[i] += dp[i + j];
			}
		}
	}
	for (int i = 0; i <= n; i++)
	{
		cout << dp[i] << " ";
	}
	cout << endl;
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
	//cout << stairpaths(n, dp);

	cout << stairpathstab(n, a, dp);
}
