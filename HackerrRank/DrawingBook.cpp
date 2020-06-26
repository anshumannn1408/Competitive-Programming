#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n , p , t;
	cin >> n;
	cin >> p;
	if (n-p < p)
	{
		if(n%2 == 0 && p%2 == 0 || n%2 != 0 && p%2 != 0)
		{
		    t = (n-p)/2;
	    }
		if(n%2 != 0 && p%2 == 0)
		{
		    t = (n-p)/2;
	    }
	    if(n%2 == 0 && p%2 != 0 && n-p == 1)
	    {
	    	t = (n-p)/2 +1;
		}
		else if(n%2 == 0 && p%2 != 0)
		{
			t = (n-p)/2;
		}
	}
	else
	{
		if(p%2 == 0)
		{
		    t = (p)/2;
		}
	    if(p%2 != 0 && n-p == 1)
		{
			t = (p)/2;
		}
	}
	cout << t;
	return 0;
}
