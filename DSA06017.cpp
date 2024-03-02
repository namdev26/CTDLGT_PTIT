#include <bits/stdc++.h>
using namespace std;

int main (){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int m; cin >> m;
        int a[n], b[m];
        for ( int i =0; i < n; i++){
            cin >> a[i];
        }
        for ( int i =0; i < n; i++){
            cin >> b[i];
        }
        multiset <int> mse;
        for (auto x : a){
            mse.insert(x);
        }
        for (auto x : b){
            mse.insert(x);
        }
        for ( auto x : mse){
            cout << x  << " ";
        }
        cout << endl;
    }
}