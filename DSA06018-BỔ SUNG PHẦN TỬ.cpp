#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        long long n; cin >> n;
        long long a[n];
        for ( int i =0; i < n; i++){
            cin >> a[i];
        }
        sort (a, a+n);
        // 3 4 5 6 8
        // 2 5 7 9
        // 1 2 3
        int tmp =0;
        for (int i =0; i < n-1; i++){
            if (a[i+1] - a[i] != 0){
                tmp = tmp + (a[i+1] - a[i] -1);
            }
        }
        cout << tmp << endl;
    }
}
