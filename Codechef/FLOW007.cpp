#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		int d = log10(n) + 1;
		

		int unit_digit;		
		if (n % 10 != 0) unit_digit = 1;      
		else unit_digit = 0;    		   
		
		for(int i = 1; i<=d ; i++)
		{
			int r = n % 10;
			if (unit_digit) {
				cout << r;
			} else {
				if(r != 0) cout << r ;	
			}
			
			n /=10; 
		}
		cout << endl;		
	}
	return 0;
}
