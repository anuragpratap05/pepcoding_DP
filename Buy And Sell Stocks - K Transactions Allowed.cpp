# pepcoding_DP#include<bits/stdc++.h>
using namespace std;


int main()
{

	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}


	int k;
	cin >> k;

	int dp[k + 1][n];

	for (int t = 0; t <= k; t++)
	{
		for (int d = 0; d < n; d++)
		{
			if (t == 0 or d == 0)
			{
				dp[t][d] = 0;
			}

			else
			{
				int maxi1 = dp[t][d - 1];
				int maxi2 = INT_MIN;
				for (int i = 0; i < d; i++)
				{
					maxi2 = max(maxi2, dp[t - 1][i] + (a[d] - a[i]));
				}
				dp[t][d] = max(maxi2, maxi1);
			}
		}
	}

	/*for (int i = 0; i <= k; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}*/

	cout << dp[k][n - 1];
}
