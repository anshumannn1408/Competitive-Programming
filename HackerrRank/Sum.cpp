#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	long long sum = 0;
	long long a;
	cin >> n;
	while(n--)
	{
		cin >> a;
		sum += a;
	}
	cout << sum;
	return 0;
}
