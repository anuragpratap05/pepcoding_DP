# pepcoding_DP#include<bits/stdc++.h>
using namespace std;



int main()
{


	int n, c;
	cin >> n >> c;

	int a[n][c];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cin >> a[i][j];
		}
	}

	int dp[n][c];

	for (int i = 0; i < c; i++)
	{
		dp[0][i] = a[0][i];
	}


	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < c; j++)
		{
			int mini = INT_MAX;
			for (int k = 0; k < c; k++)
			{
				if (k != j)
				{
					mini = min(mini, dp[i - 1][k]);
				}
			}
			dp[i][j] = a[i][j] + mini;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}
}
