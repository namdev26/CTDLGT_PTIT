#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main (){
    int t; cin >> t;
    while (t--){
        ll n, k; cin >> n >> k;
        ll a[n+1];
        for (int i = 1; i <= n; i++){
            a[i] = pow (2, i-1);
        }
        for ( int i = n; i >= 1; i--){
            if (k == a[i]){
                cout << i << endl;
                break;
            }
            else if (k > a[i]){
                k = k - a[i];
            }
        }
    }
}