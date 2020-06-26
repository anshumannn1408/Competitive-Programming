#include <bits/stdc++.h>
using namespace std;
int main() {
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		
		int count = 1;
		int mat[n][n];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				mat[i][j] = count;
				count++;
			}
		}
		
		if (n % 2 == 0) {
			for (int i = 1; i < n; i += 2) {
				for (int j = 0; j < n; j += 2) {
					swap(mat[i][j], mat[i][j + 1]);
				}
			}	
		}
		
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << mat[i][j] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
