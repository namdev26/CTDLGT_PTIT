#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n; cin >> n;
    long long a[n];
    for ( int i =0; i < n; i++){
        cin >> a[i];
    }
    sort (a, a+n, greater <int> ());
    int k1 = a[0] * a[1] * a[2];
    int k2 = a[n-1] * a[n-2] * a[n-3];
    int k3 = a[0] * a[1];
    int k4 = a[n-1] * a[n-2];
    int k5 = a[0] * a[1] * a[n-1];
    int k6 = a[n-1] * a[n-2] * a[0];
    int m1 = max (k1,k2);
    int m2 = max (k3, k4);
    int m3 = max (k5, k6);
    int m = max(m1, max(m2,m3));
    cout << m << endl;
}