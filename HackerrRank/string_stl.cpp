#include <bits/stdc++.h>
using namespace std;


//int at(int i) {
//	return s[i];
//}

int main() {
	string s = "hello";
	                    //^     
	string x = "p";
	s += x;
	string t;
	t.assign(s);
	cout << t.size() << endl;
	cout << t.capacity() << endl;
}
