#include <bits/stdc++.h>
using namespace std;

int main (){
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int f[n];
    for ( int i =0; i < n; i++){
        f[i] =0;
    }
    int m =0;
    for (int i =0; i < n; i++){
        f[a[i]] = f[a[i] -1] + 1;
        m = max(m, f[a[i]]);
    }
    cout << n -m << endl;
}