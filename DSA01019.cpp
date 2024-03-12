#include <bits/stdc++.h>
using namespace std;

// coi A =0
// H =1;
//010101 010110
int n;
char a[1000];
int ok;
void khoiTao(){
    for (int i =1; i <= n; i++){
        a[i] = 'A';
    }
}

void sinhKeTiep(){
    int i =n;
    while (i>=1 && a[i] == 'H'){
        a[i] = 'A';
        i--;
    }
    if (i==0){
        ok =1;
    }
    else {
        a[i] = 'H';
    }
}

bool check (){
    if (a[1] == 'H' && a[n]== 'A'){
        for ( int i =1; i <= n; i++){
            if (a[i] == 'H' && a[i+1] == 'H'){
                return false;
            }
        }
        return true;
    }
    return false;
}

int main (){
    int t; cin >> t;
    while (t--){
        cin >> n;
        khoiTao();
        ok =0;
        while (ok ==0){
            if(check()){
                for ( int i =1; i <= n; i++){
                    cout << a[i]; 
                }
                cout << endl;
            }
            sinhKeTiep();
        }
    }
}