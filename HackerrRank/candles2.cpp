#include <bits/stdc++.h>
using namespace std;

int main ()
{
    
    int n;
    int s = n;
    
    int arr[n];
    cin >> n;
	int count = 0;
    
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
	for (int i= 0; i < s; i++) cout << arr[i] <<  " ";
	sort(arr , arr + n);
    for(int i = 0; i < n; i++)
    {
        if(arr[n-1] == arr[i])
        count++;
    }
    cout << count << endl;
    return 0;
}

