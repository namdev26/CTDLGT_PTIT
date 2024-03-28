#include <bits/stdc++.h>
using namespace std;

int main (){
    int t; cin >> t;
    while (t--){
        long long n;
        cin >> n;
        long long a[n];
        for (int i =0; i < n; i++){
            cin >> a[i];
        }
        int tmp = 1e9;
        int ok ;
        for (int i =0; i < n-1; i++){
            for (int j = i+1; j < n; j++){
            if (abs(a[i] + a[j]) < tmp){
                tmp = abs(a[i]+ a[j]);
                ok = a[i] + a[j];
            }
            }
        }
        cout << ok << endl;
    }
}