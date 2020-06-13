#include <iostream>
using namespace std;
int main()
{
	int t,q,a;
	float o;
	cin >> t;
	while(t--)
	{
	cin >> q >> a;
	if(q > 1000)
	{
		o = (0.9)*q*a;
		cout << o << endl;		
	}
	else
	{
		o = q*a;
		cout << o << endl;
	}
}
	return 0;
}
