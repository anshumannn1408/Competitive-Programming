#include <bits/stdc++.h>
using namespace std;

int main() {
	int count[5];
	memset(count, 0, 5);
	for (int i = 0; i < 5; i++) {
		cout << count[i] << " ";
	}
	
	int n;
	cin >> n;
	int arr[n];
	
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] == 1) count[0]++;
		if (arr[i] == 2) count[1]++;
		if (arr[i] == 3) count[2]++;
		if (arr[i] == 4) count[3]++;
		else count[4]++;
	}

	int maxx = *max_element(arr, arr + 5);
	for (int i = 0; i < 5; i++) {
		if (arr[i] == maxx) {
			cout << i + 1 << endl;
			break;
		}
	}
}

/*
0 1 2 3 4
4 5 19 12 13
4 5 12 13 19
//4 5 1 2 9  
/*
1 2 3 4 7      // best case: O(n)
sort(a, a+n);  // O(nlogn)  -average case scenario
7 4 3 2 1      // O(n^2)

/*


// -1 -3 -5 -6 -9
max = 11 1 2 3 4   


int max = -9999999, min = 9999;
for (int i = 0; i < n; i++) {   O(n) O(n^2)
	if (arr[i] >= max) {
		max = arr[i];       //O(n)
	}
}

*/
