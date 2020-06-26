#include <bits/stdc++.h>
using namespace std;

int main() {
    int count[5] = {0, 0, 0, 0, 0};
    int n;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];                       //1 1 1 2 3 2 2 3 3 4 1 4 4
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) count[0]++;
        if (arr[i] == 2) count[1]++;
        if (arr[i] == 3) count[2]++;
        if (arr[i] == 4) count[3]++;
        if (arr[i] == 5) count[4]++;
    }

    //4 3 3 3 0   
    int maxx = *max_element(count, count + 5);
    for (int i = 0; i < 5; i++) {
        if (count[i] == maxx) {
            cout << i + 1 << endl;
            break;
        }
    }
}

