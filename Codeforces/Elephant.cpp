#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	if(n <= 5) cout << "1";
	else if(n%5 == 0)
	{
	    n /= 5;
	    cout << n;
	}
	else
	{
		n /= 5;
		n +=1;
	    cout << n;
	}
	return 0;
}
