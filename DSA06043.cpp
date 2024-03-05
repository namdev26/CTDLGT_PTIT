
#include <bits/stdc++.h>
using namespace std;

int check (int a[], int n){
    int total_sum = 0;
    int left_sum =0;
    for ( int i =0; i < n; i++){
        total_sum = total_sum + a[i];
    }
    for ( int i =0; i < n; i++){
        total_sum= total_sum-a[i];
        int right_sum = total_sum;
        if (right_sum == left_sum){
            return i + 1;
        }
        left_sum = left_sum + a[i];
    }
    return -1;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n ; cin >> n;
        int a[n];
        for(int i =0; i < n; i++) cin >> a[i];
        int ok = check(a,n);
        cout << ok << endl;
    }
}