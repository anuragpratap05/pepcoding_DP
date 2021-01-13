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

	int fees;
	cin >> fees;

	int obsp = -a[0];
	int ossp = 0;

	for (int i = 1; i < n; i++)
	{
		int nbsp = 0;
		int nssp = 0;
		if (ossp - a[i] > obsp)
		{
			nbsp = ossp - a[i];
		}
		else
		{
			nbsp = obsp;
		}

		if (obsp + a[i] - fees > ossp)
		{
			nssp = obsp + a[i] - fees;
		}
		else
		{
			nssp = ossp;
		}

		obsp = nbsp;
		ossp = nssp;
	}
	cout << ossp;

}
