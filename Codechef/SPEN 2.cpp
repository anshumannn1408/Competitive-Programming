#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    long long n;
    while(t--)
    {
    	cin >> n;
        if(n%2 == 0)
        {
            if(n%4 == 0)
            {
            n /= 4;
            n *= n;
            cout << n << endl;
            }
            else
            {
                n /= 2;
                n = (n-1)/2;
                n = n*(n+1);
                cout << n << endl; 
            }
        }
            else
            {
               n -= 1;
               if(n%4 == 0)
               {
               n /= 4;
               n *= n;
               cout << n << endl;
               }
               else
               {
                   n /= 2;
                   n = (n-1)/2;
                   n = n*(n+1);
                   cout << n << endl;
               }
               
            }
    }

    return 0;

}
