# pepcoding_DP#include<bits/stdc++.h>
using namespace std;

bool subset_sum(int n, int target, int a[], int** dp)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= target; j++)
		{
			if (dp[i - 1][j] == true)
			{
				dp[i][j] = true;
			}
			else
			{

				int run_bnane = j;
				int run_mai_bna_skta = a[i - 1];
				if (run_bnane >= run_mai_bna_skta and dp[i - 1][run_bnane - run_mai_bna_skta] == true)
				{
					dp[i][j] = true;
				}

			}
		}
	}
	return dp[n][target];
}

int main()
{
#ifndef ONLINE_jUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n ;

	int val[n];
	for (int i = 0; i < n; i++)
	{
		cin >> val[i];
	}
	int wt[n];
	for (int i = 0; i < n; i++)
	{
		cin >> wt[i];
	}
	int cap;
	cin >> cap;

	int dp[n + 1][cap + 1];
	for (int i = 0; i <= n; i++)
	{
		dp[i][0] = 0;
	}
	for (int i = 0; i <= cap; i++)
	{
		dp[0][i] = 0;
	}


	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= cap; j++)
		{
			int cur_cap = wt[i - 1];
			if (j >= cur_cap)
			{
				int rem_c = j - cur_cap;
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][rem_c] + val[i - 1]);
			}
			else
			{
				dp[i][j] = dp[i - 1][j];
			}
		}
	}

	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= cap; j++)
		{
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}
	//cout << stairpaths(n, dp);


}
