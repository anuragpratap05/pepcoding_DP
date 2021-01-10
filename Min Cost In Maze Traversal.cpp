# pepcoding_DP#include<bits/stdc++.h>
using namespace std;

int min_maze_cost(int row, int col, int** a, int** dp)
{
	int n = row;
	int m = col;
	for (int i = row; i >= 0; i--)
	{
		for (int j = col; j >= 0; j--)
		{
			if (i == n and j == m)
			{
				dp[i][j] = a[i][j];
			}
			else if (i == n)
			{
				dp[i][j] = dp[i][j + 1] + a[i][j];
			}
			else if (j == m)
			{
				dp[i][j] = dp[i + 1][j] + a[i][j];
			}
			else
			{
				dp[i][j] = min(dp[i + 1][j], dp[i][j + 1]) + a[i][j];
			}
		}
	}
	return dp[0][0];
}

int main()
{
#ifndef ONLINE_jUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, m;
	cin >> n >> m;

	int **a = new int*[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = new int[m];
	}



	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}





	int** dp = new int*[n ];
	for (int i = 0; i < n; i++)
	{
		dp[i] = new int[m];
	}


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			dp[i][j] = INT_MAX;
		}
	}
	//cout << stairpaths(n, dp);

	cout << min_maze_cost(n - 1, m - 1, a, dp);
}
