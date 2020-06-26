#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long i , j , k , c , r;
	long long count = 0;
	cin >> i >> j >> k;
	for(int a = i ; a <= j ; a++)
	{
		int original = a;
		int reverse = 0;
		while(a != 0)
		{
			r = a%10;
			reverse = reverse*10 + r;
			a = a/10; 
		}

		c = abs(reverse - original);
		if(c % k == 0) count++;
		a = original;
	} 
	cout << count ;

    return 0;

}
