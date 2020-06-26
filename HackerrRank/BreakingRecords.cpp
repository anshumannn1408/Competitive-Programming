#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t , g , l , n , a;
	int count1 = 0 , count2 = 0;
	cin >> t;
	cin >> n;
	l = n;
	g = n;
	for(int i = 1; i < t; i++ )
	{
		cin >> a;
		if(a > n && a > g)
		{
		    count1++;
		    g = a;
	    }
	    else if(a < n && a < l)
	    {
	    	count2++;
	    	l = a;
		}
	}
	cout << count1 << " " << count2;
	return 0;
}
