#include <bits/stdc++.h>
using namespace std;

int main()
{
	int k , n , w , b;
	int sum = 0;
	cin >> k >> n >> w;
	for(int i = 1 ; i <= w ; i++)
	{
		sum += i*k;
	}
	b = sum - n;
	if(b > 0) cout << b;
	else cout << "0";
	return 0;
}
