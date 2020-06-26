#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int l = 2 , m =2;
    for(int i = 2 ; i <= n ; i++)
    {
        m = m + floor((l*3)/2) ;
        l = floor((l*3)/2);
	}
	cout << m;
    return 0;

}
