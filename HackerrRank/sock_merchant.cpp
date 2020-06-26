#include <bits/stdc++.h>
using namespace std;

int main() {
	//hash map
	unorderd_map<int> socks_count(101, 23);    //hash map
	socks_count[0] = -1;
	
	
	
	
	key-value pairs:
	
	color of socks -- key
	count of socks -- value
	
	red = 10
	black = 10
	blue = 12
	green = 5
	
	
	/*
	9
	10 20 20 10 10 30 50 10 20   // 1 gb  --> 97 gb 4 gb 
	*/
	for (int i : socks_count) cout << i << " "; 
	
	int n;
	cin >> n;
	int arr[n];
	
	vector<int> arr_vec(arr, arr + n);
	for (auto x : arr_vec) cout << x << " "; 
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		socks_count[arr[i]]++;
	}
	
	int pair = 0;
	for (int i = 1; i < 101; i++) {
		pair += socks_count[i] / 2;
	}
	cout << pair << endl;
}
