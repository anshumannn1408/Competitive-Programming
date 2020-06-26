#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n , a , num;
	
	cin >> n;
	int grades[n];
	
	
	for(int i = 0; i < n; i++)
	{
		cin >> grades[i];
		
		if (grades[i] <= 37)
		continue; 
	    	num = grades[i] % 5 < 3 ? grades[i]: grades[i] - (grades[i] % 5) + 5;
	    	grades[i] = num;
		
	}
	
	for (int i = 0; i< n; i++) {
		cout << grades[i] << endl;
	}
	
	return 0;
}
