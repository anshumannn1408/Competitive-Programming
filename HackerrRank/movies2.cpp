#include <bits/stdc++.h>
using namespace std;

int main() {
	int i, j, k;
	cin >> i >> j >> k;
	
	int count = 0;
	for (int a = i; a <= j; a++) {
		string s = to_string(a);       		  		
		reverse(s.begin(), s.end());          
		string reverse = s;                  
		if (abs(stoi(reverse) - a) % k == 0) count++;
	}
	cout << count << endl;
}
