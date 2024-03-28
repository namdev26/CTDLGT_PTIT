#include <bits/stdc++.h>
using namespace std;
int main (){
    int t; cin >> t;
    while (t--){
        int mod = 1e9 + 7;
        long long n; cin >> n;
        long long a[n];
        for ( int i =0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a+n);
        int tongMax=0;
        for ( int i =0; i < n; i++){
            tongMax = (tongMax + a[i]*i) % mod;
        }
        cout << tongMax << endl;
    }
}