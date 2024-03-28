#include <bits/stdc++.h>
using namespace std;

// Thuật Boyer-Moore

int findCandidate(int a[], int n){
    int candidate = -1;
    int votes =0;
    for ( int i =0; i < n; i++){
        if(votes ==0){
            candidate = a[i];
            votes =1;
        }
        else {
            if(a[i] == candidate){
                votes ++;
            }
            else {
                votes --;
            }
        }
    }
    int count =0;
    for (int i =0; i < n;i++){
        if(a[i] == candidate){
            count++;
        }
    }
    if(count > n/2) return candidate;
    return -1;
}

int main(){
    int t; cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n];
        for ( int i =0; i < n; i++){
            cin >> a[i];
        }
        int major = findCandidate(a,n);
        if (major != -1){
            cout << major << endl;
        }
        else cout << "NO" << endl;
    }
}