#include <bits/stdc++.h>
using namespace std;

int main() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
	{
		int n , k , a;
		int count = 0;
		cin >> n >> k;
		for(int i = 0; i < n ; i++)
		{
			cin >> a;
			if(a <= 0) count++;
		}
		if(count >= k) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
    return 0;
}
