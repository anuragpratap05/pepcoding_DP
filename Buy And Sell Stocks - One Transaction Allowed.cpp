# pepcoding_DP#include<bits/stdc++.h>
using namespace std;


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

	int lsf = INT_MAX;
	int total = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < lsf)
		{
			lsf = a[i];
		}

		int pist = a[i] - lsf;
		if (pist > total)
		{
			total = pist;
		}
	}



	cout << total;

}
