#include <bits/stdc++.h>
using namespace std;

long long mod = 123456789;
long long luyThua(long long n, long long k){
    if(k == 1){
        return n;
    }
    long long x = luyThua(n, k/2);
    if (k % 2 ==0){
        return (x * x) % mod;
    }
    else return (x * x * n) % mod;
}

int main (){
    int t; cin >> t;
    while (t--){
        long long n; cin >> n;
        cout << luyThua(2,n -1) << endl;
    }
}