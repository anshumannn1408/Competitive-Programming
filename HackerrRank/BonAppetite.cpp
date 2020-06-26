#include <bits/stdc++.h>
using namespace std;

int main()

{
	int n , a , k;
	cin >> n;
	int arr[n];
	int sum1 = 0 , sum2 = 0;
	cin >> a;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	    sum1 += arr[i];
	}
	 sum2 = (sum1 - arr[a])/2;
	 cin >> k;
	 if(k == sum2)
	 cout << "Bon Appetite";
	 else
	 cout << k - sum2; 
	return 0;
}
