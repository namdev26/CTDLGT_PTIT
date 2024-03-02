#include <bits/stdc++.h>
using namespace std;

int n; char a[1000]; int ok;

void khoiTao(){
    for (int i =1; i <=n; i++){
        a[i] = 'A';
    }
}

void sinhKeTiep(){
    int i = n;
    while (i >= 1 && a[i] == 'B'){
        a[i] = 'A';
        i--;
    }
    if (i == 0){
        ok =0;
    }
    else {
        a[i]= 'B';
    }
}

int main (){
    int t; cin >> t;
    while (t--){
        cin >> n; 
        khoiTao();
        ok = 1;
        while (ok ==1){
            for( int i =1; i <= n; i++){
                cout << a[i] ;
            }
            cout << " ";
            sinhKeTiep();
        }
        cout << endl;
    }
}