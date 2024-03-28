#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t; 
    long long a[50];
    a[0] = 0;
    a[1] = 1;
    for ( int i =2; i <=45;i++){
        a[i]= a[i-1] + a[i-2];
    }
    long long b[50];
    b[0]= 1;
    b[1] =1;
    for ( int i =2; i <=45; i++){
        b[i]= b[i-1] + b[i-2];
    }
    while (t--){
        int n, k;
        cin >> n >> k;
        long long ok =0;
        while (k > 0 && n > 0){
            if (k == b[n]){
                ok += a[n];
                break;
            }
            if ( k >= b[n-1]){
                ok += a[n-1];
                k -= b[n-1];
                n = n-2;
            }
            else {
                n = n-1;
            }
        }
        cout << ok << endl;
        }
    }

