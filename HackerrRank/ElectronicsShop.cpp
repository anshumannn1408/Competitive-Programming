#include<bits/stdc++.h>
using namespace std;

int main()
{

    int s,n,m,a;
	int keyboard[1001],usb[1001];
    int maxx = -1;
    cin >> s >> n >> m;
    for(int i = 0; i < n; i++)cin >> keyboard[i];
    for(int i = 0; i < m; i++)cin >> usb[i];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(keyboard[i]+usb[j] <= s)maxx = max(maxx,keyboard[i]+usb[j]);
        }
    }
    cout << maxx << endl;
    return 0;
}
