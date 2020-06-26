#include <bits/stdc++.h>
using namespace std;

int main()
{
	int q;
	cin >> q;
	int x , y , z;
	while(q--)
	{
		cin >> x >> y >> z;
		if(abs(x-z) < abs(y-z)) cout << "Cat A" << endl;
		if(abs(x-z) > abs(y-z)) cout << "Cat B" << endl;
		if(abs(x-z) == abs(y-z)) cout << "Mouse C" <<endl;
	}
	return 0;
} 
