#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int x; cin >> x;
        int a[n];
        for ( int i =0; i < n; i++){
            cin >> a[i];
        }
        for ( int i =0; i < n; i++){
            if (a[i] == x){
                cout << i + 1<< endl;
                break;
            }
        }
    }
}