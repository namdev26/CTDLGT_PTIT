#include <bits/stdc++.h>
using namespace std;

int main (){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int k; cin >> k;
        int a[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        int tmp =0;
        for ( int i =0; i < n; i ++){
            for (int j = i+1; j < n; j++){
                if (a[i] + a[j] == k){
                    tmp ++;
                }
            }
        }
        cout << tmp << endl;
    }
}