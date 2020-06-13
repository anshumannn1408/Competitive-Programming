#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		cout << count(s.begin(), s.end(), '4') << endl;
	}
	return 0;
}

1234 4 * 10^3 = 4000
123  3 * 10^2 = 4000 + 300
12   2 * 10^1 = 4000 + 300 + 20 + 1 = 4321


    
