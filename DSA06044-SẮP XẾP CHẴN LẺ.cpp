#include <bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin >> n;
    int a[n];
    for ( int i =0; i < n; i++){
        cin >> a[i];
    }
    for ( int i =0; i < n; i = i+2){
        for ( int j = i+2; j < n; j=j+2){
            if(a[i] > a[j]) swap(a[i],a[j]);
        }
    }
    for ( int i =1; i < n; i = i+2){
        for ( int j = i+2; j < n; j=j+2){
            if(a[i] < a[j]) swap(a[i],a[j]);
        }
    }
    for ( int i =0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}