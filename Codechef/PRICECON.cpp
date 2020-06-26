#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,k,a;
	cin >> t;
	while(t--)
	{
		int sum=0,sum2=0;
		cin >> n >> k;
		for(int i=1 ; i<=n ; i++)
		{
			cin >> a;
			if(a>k)
			{
				sum += k;
			}
			else
			{
				sum += a;
			}
			sum2 += a;
		}
	    sum2 -= sum;
		cout << sum2 << endl;
	}
	return 0;
}
