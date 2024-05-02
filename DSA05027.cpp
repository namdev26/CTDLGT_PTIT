#include <bits/stdc++.h>
using namespace std;

int main (){
    int t; cin >> t;
    while (t--){
        int n, v;
    cin >> n >> v;
    int a[n+1], b[n+1];
    for ( int i =1; i <= n; i++){
        cin >> a[i];
    }
    for ( int i =1 ; i <=n; i++){
        cin >> b[i];
    }
    int f[n][v] = {};
    for ( int i =1; i <= n; i++){
        for ( int j =1 ; j <= n; j++){
            if (j >= a[i]){
                f[i][j] = max (f[i-1][j], f[i-1][j-a[i]] + b[i]);
            }
            else if (j < a[i])
            f[i][j] = f[i-1][j];
        }
    }
    cout << f[n][v] << endl;
    } 
}