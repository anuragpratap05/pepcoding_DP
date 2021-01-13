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


	int lsf = a[0];
	int mpot = 0;
	int dpl[n];
	dpl[0] = 0;
	for (int i = 1; i < n; i++)
	{
		if (a[i] < lsf)
		{
			lsf = a[i];
		}

		mpot = a[i] - lsf;
		dpl[i] = max(mpot, dpl[i - 1]);

	}

	int msf = a[n - 1];
	int mpir = 0;
	int dpr[n];
	dpr[n - 1] = 0;
	for (int i = n - 2; i >= 0; i--)
	{
		if (a[i] > msf)
		{
			msf = a[i];
		}

		mpir = msf - a[i];
		dpr[i] = max(mpir, dpr[i + 1]);
	}
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		ans = max(ans, dpl[i] + dpr[i]);
	}
	cout << ans;
}
