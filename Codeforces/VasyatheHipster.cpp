#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a , b , c;
	cin >> a >> b;
	if(a <= b)
	cout << a << ' ';
	else cout << b << ' ';
	c = (abs(a-b))/2;
	cout << c;
	return 0;
}
