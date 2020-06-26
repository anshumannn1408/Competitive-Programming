#include <bits/stdc++.h>
using namespace std;

int main()
{	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int t, n;
	int a = 1;
	cin >> t ;
	while(t--)
	{
		a = 1;
		cin >> n;
		for (int i = 1 ; i <= n ; i++)
		{
		    if(i%2 != 0)
		    	a = a*2;
			else
		    	a = a+1;
	    }	
	    cout << a << endl;
	} 
	return 0;
} 
