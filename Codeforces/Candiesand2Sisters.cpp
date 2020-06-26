#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	long long n;
	while(t--)
	{
		cin >> n;
		n = ((n-1)/2);
		if (n <= 0) cout << "0" << endl;
		else cout << n <<endl;
	}
	return 0;
}
