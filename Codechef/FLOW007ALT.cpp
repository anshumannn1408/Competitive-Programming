#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
		int n;
		cin >> n;
		
		if (n == 0) {
			cout << 0;
			continue;
		} 
		
		int d = log10(n) + 1;
		cout << d << endl;
		
		int arr[d];
		
		int i = 0;
		while (n) {
			int rem = n % 10;
			arr[i] = rem;
			n /= 10;
			i++;
		}		
		
		if (arr[0] == 0) {
			for (int i = 0; i < d; i++) {
				if (arr[i] == 0) continue;
				else cout << arr[i];
			}
		} else {
			for (int i = 0; i < d; i++)  {
				cout << arr[i];
			}
		}
		
		cout << endl;
	}
	return 0;
}
