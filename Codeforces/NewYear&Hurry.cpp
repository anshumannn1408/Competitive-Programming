#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n , k;
	cin >> n >> k;
	int sum = k;
	for(int i = 0 ; i <= n ; i++)
	{
		sum += 5*(i+1);
		if(sum == 240) 
		{
		    cout << i +1;
		    break;
	    }
        else if(sum > 240) 
		{
		    cout << i;
		    break;
        }
		else if(sum < 240 && i==n) 
		{
		    cout << n;
			break;
	    }
	}
	return 0;
}
