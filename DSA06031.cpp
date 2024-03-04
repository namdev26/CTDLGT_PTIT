#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int k; cin >> k;
        int a[n];
        for ( int i =0; i < n; i++){
            cin >> a[i];
        }
        set <int> se;
        auto it = se.end();
            for ( int i =0; i < k + i ; i++){
                se.insert(a[i]);
            }
            cout << *it << " ";
        cout << endl;
    }
}