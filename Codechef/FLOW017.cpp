#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,a,b,c;
	cin >> t;
	while(t--)
	{
		cin >> a >> b >> c;
		if(b < a && b > c || b>a && b<c)
		cout << b << endl;
		else if(c<a && c>b || c>a && c<b)
		cout << c << endl;
		else 
		cout << a << endl;
	}
	return 0;
}
