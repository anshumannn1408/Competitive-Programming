#include <bits/stdc++.h>
using namespace std;

int main()
{
	int x1 , v1 , x2 , v2;
	cin >> x1 >> v1 >> x2 >> v2;
	if (x1<x2 && v1<v2)
	cout << "NO";
	else if(x1>x2 && v1>v2)
	cout << "NO";
	else if(x1<x2 && v1>v2)
	{
		if(x1%2==0 && x2%2==0 && v1%2==0 && v2%2==0)
		cout << "YES";
		else if(x1%2!=0 && x2%2!=0 && v1%2!=0 && v2%2!=0)
		cout << "YES";
		else if(x1%2!=0 && x2%2!=0 && v1%2==0 && v2%2==0)
		cout << "YES";
		else if(x1%2==0 && x2%2==0 && v1%2!=0 && v2%2!=0)
		cout << "YES";
		else if(x1%2!=0 && x2%2==0 && v1%2!=0 && v2%2==0)
		cout << "YES";
		else if(x1%2==0 && x2%2!=0 && v1%2==0 && v2%2!=0)
		cout << "YES";
		else
		cout << "NO";
	}
	else if(x1>x2 && v1<v2)
	{
	    if(x1%2==0 && x2%2==0 && v1%2==0 && v2%2==0)
		cout << "YES";
		else if(x1%2!=0 && x2%2!=0 && v1%2!=0 && v2%2!=0)
		cout << "YES";
		else if(x1%2!=0 && x2%2!=0 && v1%2==0 && v2%2==0)
		cout << "YES";
		else if(x1%2==0 && x2%2==0 && v1%2!=0 && v2%2!=0)
		cout << "YES";
		else if(x1%2!=0 && x2%2==0 && v1%2!=0 && v2%2==0)
		cout << "YES";
		else if(x1%2==0 && x2%2!=0 && v1%2==0 && v2%2!=0)
		cout << "YES";
		else
		cout << "NO";	
	}
	else if(x1==x2 && v1==v2)
	cout << "YES";
	else
	cout << "NO";
	return 0;
}
