#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,r;
	cin >> t;
	while(t--)
	{
		cin >> n;
		int count = 0;
		int d = log10(n) + 1;
		
		for(int i = 0; i <= d; i++) {
			r = n % 10;       
//			cout << "at i: " << i << " r: " << r << endl;
			if (r == 4) count++; 
			n /= 10;
		}
		cout << count << endl;
	}
	return 0;
}

















