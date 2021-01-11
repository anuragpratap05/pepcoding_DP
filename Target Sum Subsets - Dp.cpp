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

	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int target;
	cin >> target;


	int **dp = new int*[n + 1];
	for (int i = 0; i <= n; i++)
	{
		dp[i] = new int[target + 1];
	}

	for (int i = 0; i <= target; i++)
	{
		dp[0][i] = false;
	}
	for (int i = 0; i <= n; i++)
	{
		dp[i][0] = true;
	}

	//cout << stairpaths(n, dp);

	if ( subset_sum(n , target, a, dp))
	{
		cout << "subset_sum exist";
	}
	else
	{
		cout << "subset_sum does not exist";
	}
}
