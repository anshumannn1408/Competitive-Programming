#include <iostream>
using namespace std;
int main()
{
int num, count = 0;
int array[]= {1,1,2,3,4,1,3,2,9,8,7};
cout<<"Which number would you like to know about how many times it appeared?"<<endl;
cin>>num;
for (int i:array)
{if (i == num) ++count;}
cout<<"Number "<<num<<" appeared "<<count<<" times in the array"<<endl;
return 0;
}
