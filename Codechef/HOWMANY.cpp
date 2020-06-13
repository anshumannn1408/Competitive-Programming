#include <iostream>
using namespace std;
int main()
{
	int N;
	cin >> N;
	if(N/10 < 1)
	{
		cout << "1";
	}
	else if(N/100 < 1)
	{
		cout << "2";
	}
	else if(N/1000 < 1)
	{
		cout << "3";
	}
	else
	{
		cout << "More than 3";
	}
	return 0;
}
