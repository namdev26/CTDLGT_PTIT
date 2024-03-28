#include <bits/stdc++.h>
using namespace std;

int n;
int a[1000];
int ok;
void khoitao (){
    for ( int i =1 ; i <= n; i++){
        a[i] =0;
    }
}

void sinhKeTiep(){
    int i = n;
    while (i >= 1 && a[i] ==1){
        a[i] = 0; i--;
    }
    if ( i ==0){
        ok =0;
    }
    else {
        a[i] =1;
    }
}

bool check (){
    int l =1; int r =n;
    while ( l < r){
        if (a[l] != a[r]) {
            return false;
        }
        l++; r--;
    }
    return true;
}

int main (){
    cin >> n;
    khoitao();
    ok = 1;
    while (ok ==1){
        if (check()){
            for (int i =1; i <=n; i++){
                cout << a[i] <<" ";
            }
            cout << endl;
        }
        sinhKeTiep();
    }
}