#include <bits/stdc++.h>
using namespace std;

bool find(int a[], int n,int k){
    sort(a, a+n);
    for ( int i =0; i < n; i++){
        int l = i+1;
        int r = n -1;
        while (l < r){
            if (a[i] + a[l] + a[r] == k) return true;
            else if (a[i] + a[l] + a[r] < k) l++;
            else if (a[i] + a[l] + a[r] > k) r--;
        }
    }
    return false;
}

int main(){
    int t; cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        for ( int i =0; i < n; i++) cin >> a[i];
        if(find(a,n,k)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}