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



	int obsp = -a[0];
	int ossp = 0;
	int ocsp = 0;

	for (int i = 1; i < n; i++)
	{
		int nbsp = 0;
		int nssp = 0;
		int ncsp = 0;

		nbsp = max(obsp, ocsp - a[i]);

		nssp = max(ossp, a[i] + obsp);

		ncsp = max(ocsp, ossp);

		obsp = nbsp;
		ossp = nssp;
		ocsp = ncsp;
	}
	cout << ossp;

}
