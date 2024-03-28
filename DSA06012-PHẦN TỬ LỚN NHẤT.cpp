#include <bits/stdc++.h>
using namespace std;

int main (){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int k ; cin >> k;
        int a[n];
        for ( int i =0; i < n; i++){
            cin >> a[i];
        }
        int tmp =0;
        for (int i =0; i < n; i++){
            if (a[i] == k){
                tmp ++;
            }
        }
        if ( tmp !=0) cout << tmp << endl;
        else cout << "-1" << endl;
    }
}