#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n;
	int arr[n];
	int count = 0;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
    sort(arr , arr + n);
    for(int i = 0; i < n; i++)
    {
    	if(arr[n-1] == arr[i])
    	count++;
	}
	cout << count;
	return 0;
}
