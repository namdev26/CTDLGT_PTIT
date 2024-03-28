#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1e9 + 7;
long long binhPhuong(long long n, long long k){
    long long ketQua =1;
    while (k > 0){
        if(k % 2==1){
            ketQua = (ketQua * n) % MOD ;
        }
        n = (n * n) % MOD;
        k = (k /2) %MOD;
    }
    return ketQua;
}

int main(){
    int t; cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        cout << binhPhuong(n,k) << endl;
    }
}