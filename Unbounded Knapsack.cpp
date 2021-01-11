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

	int dp[cap + 1];
	dp[0] = 0;


	for (int i = 1; i <= cap; i++)
	{
		int maxi = 0;
		for (int j = 0; j < n; j++)
		{
			int cur_c = i;
			int cur_wt = wt[j];
			int total = 0;
			if (cur_c >= cur_wt)
			{
				int r_cap = cur_c - cur_wt;
				total = val[j] + dp[r_cap];
			}
			if (total > maxi)
			{
				maxi = total;
			}
		}
		dp[i] = maxi;

	}

	for (int i = 0; i <= cap; i++)
	{

		cout << dp[i] << " ";

	}
	//cout << stairpaths(n, dp);


}
