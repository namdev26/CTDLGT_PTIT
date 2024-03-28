#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[1005];

void nhap(){
    for ( int i =1; i <= k; i++){
        cin >> a[i];
    }
}

void sinhToHop (){
    for ( int i =k; i >= 1;i--){
        if (a[i] != n-k+i){
            a[i]++;
            for ( int j = i+1; j <=k; j++){
                a[j]= a[j-1]+1;
            }
            break;
        }
    }
}

int main (){
    int t; cin >> t;
    while (t--){
        cin >> n >>k;
        nhap();
        sinhToHop();
        for ( int i =1; i <=k; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
}