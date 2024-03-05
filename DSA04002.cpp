#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1e9 + 7;

long long findDao(long long n){
    long long c =0;
    while (n > 0){
        c = c *10 + n%10;
        n= n/10;
    }
    return c;
}

long long binhPhuong(long long n, long long r){
    long long ketQua = 1;
    while(r>0){
        if(r % 2 ==1){
            ketQua = (ketQua * n) % MOD;
        }
        n = (n *n) % MOD;
        r = (r/2) % MOD;
    }
    return ketQua;
}

int main(){
    int t; cin >> t;
    while(t--){
        long long n; cin >> n;
        long long dao = findDao(n);
        cout << binhPhuong(n,dao) << endl;
    }
}