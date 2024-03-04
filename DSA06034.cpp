#include <bits/stdc++.h>
using namespace std;

int find(int a[], int n, int k){
    int count =0;
    sort(a, a+n);
    for ( int i =0; i < n; i++){
        int l = i;
        int r = n-1;
        while(l < r){
            if (a[l] + a[r] == k){
                count ++;
                l++;
                r--;
            }
            else if (a[l] + a[r] < k){
                l++;
            }
            else if (a[l] + a[r] > k){
                r--;
            }
        }
    }
    return count;
}

int main(){
    int t; cin >> t;
    while (t--){
        int n; 
        int k;
        cin >> n >> k;
        int a[n];
        for ( int i =0; i < n; i++){
            cin >> a[i];
        }
        int ok = find(a,n,k);
        cout << ok << endl;
    }
}