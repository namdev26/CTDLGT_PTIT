#include <bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;

int main(){
    long long t; cin >> t;
    while(t--){
        long long n,k; cin >> n >> k;
        long long a[n];
        for  (int i =0; i < n; i++){
            cin >> a[i];
        }
         k = min (k, n-k);
        sort (a, a+n);
        long long sum1=0;
        for (int i =0; i < k; i++){
            sum1 = (sum1 + a[i]) % mod;
        }
        long long sum2=0;
        for ( int i =k; i < n; i++){
            sum2 = (sum2 + a[i]) % mod;
        }
        cout << (sum2 - sum1)% mod << endl;
    }
}