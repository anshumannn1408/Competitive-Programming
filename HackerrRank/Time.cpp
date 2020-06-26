#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
//	string s1 = "abcd" + "1"  //abcd1
//	string s2 = "1" + "abcd"  //1abcd
	string hour, min, second;
	hour = s.substr(0, 2);  //11
	min =  s.substr(3, 2);
	second = s.substr(6, 2);
	int hour_t, min_t, second_t;
	hour_t = stoi(hour);  // string to integer
	min_t = stoi(min);
	second_t = stoi(second);
	
	
	//07:012:
	if(s.substr(8,2) == "PM" && hour == "12")
	{
		cout << hour_t << ":" << min_t << ":" << second_t <<endl;
	}
	else if(s.substr(8,2) == "PM")
    cout << setfill('0') << setw(2) << hour_t + 12 << ":" << setfill('0') << setw(2) << min_t << ":" << setfill('0') << setw(2) << second_t <<endl;
	else if (s.substr(8,2) == "AM" && hour == "12")
    cout << setfill('0') << setw(2) << 00 << ":" << setfill('0') << setw(2) << min_t << ":" << setfill('0') << setw(2) << second_t <<endl;
	else
	cout << setfill('0') << setw(2) <<hour_t << ":" << setfill('0') << setw(2) << min_t << ":" << setfill('0') << setw(2) << second_t <<endl;
	return 0;
}
