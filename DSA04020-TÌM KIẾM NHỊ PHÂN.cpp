#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int n, k;
        cin >> n>> k;
        int a[n];
        for (int i =0; i < n; i++){
            cin >> a[i];
        }
        int ok =0;
        int tmp =-1;
        for ( int i =0; i < n; i++){
            if (a[i] == k){
                ok =1;
                tmp = i+1;
                break;
            }
        }
        if (ok ==1) cout << tmp << endl;
        else cout << "NO" << endl; 
    }
}