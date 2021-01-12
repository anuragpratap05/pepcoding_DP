# pepcoding_DP#include<bits/stdc++.h>
using namespace std;



int main()
{
#ifndef ONLINE_jUDGE
	freopen("input2.txt", "r", stdin);
	freopen("output2.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	int inc = a[0];
	int exc = 0;
	for (int i = 1; i < n; i++)
	{
		int new_inc = exc + a[i];
		int new_exc = max(exc, inc);

		inc = new_inc;
		exc = new_exc;


	}
	cout << max(inc, exc);
}
