#include <bits/stdc++.h>
using namespace std;

char a[1000];
int n;
int ok;

// coi 6 la 0
//coi 8 la 1

void khoiTao(){
    for (int i =1; i <= n; i++){
        a[i] = '6';
    }
}

// 6666666;

void sinhKeTiep(){
    int i = n;
    while (i >= 1 && a[i] == '8'){
        a[i] = '6';
        i--;
    }
    if (i ==0){
        ok =1;
    }
    else {
        a[i] = '8';
    }
}

bool check (){
    if (n <= 5 ) return false;
    if (a[1] != '8' || a[n] != '6') return false;
    for ( int i =1; i <= n; i++){
        if (a[i] == '8' && a[i+1] == '8'){
            return false;
        }
    }
    for ( int i =1; i <= n; i++){
        if (a[i] == '6' && a[i+1] == '6' && a[i+2]=='6' && a[i+3] =='6'){
            return false;
        }
    }
    return true;
}

int main (){
    cin >> n;
    khoiTao();
    ok =0;
    while (ok==0){
        if (check()){
            for ( int i =1; i <= n; i++){
            cout << a[i];
            }
            cout << endl;
        }
        sinhKeTiep();
    }
}