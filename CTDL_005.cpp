#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int c; cin >> c;
    int a[n];
    for ( int i =0; i < n; i++){
        cin >> a[i];
    }
    for ( int i =0; i < n; i++){
        if(a[i] !=c ) cout << a[i] << " ";
    }
}