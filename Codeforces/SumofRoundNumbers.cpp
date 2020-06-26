#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t , n , r;
	cin >> t;
	while(t--)
	{
		r = 0;
		cin >> n;
		for(int i = 0 ; n > 0 ; i++)
		{
			r = n%10;
			r = r*pow(10,i);
			if(r!=0) cout << r << " ";
			n /= 10;
		}
		
	}
	
	return 0;
}

