#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n , k , d;
	cin >> n >> k;
	int arr[n];
	for (int i = 0 ; i < n ; i++)
	{
		cin >> arr[i];
    }
    sort(arr , arr + n);
    d = arr[n-1] - k;
    if(d<=0) cout << 0;
    else cout << d;
	return 0;
} 
