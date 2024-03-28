#include <bits/stdc++.h>
using namespace std;
int a[1000], ok, n;
void khoiTao(){
    for (int i =1; i <=n; i++){
        a[i]=i;
    }
}

void sinhHoanVi(){
    int i = n-1;
    while ( i >=1 && a[i] > a[i+1]){
        i--;
    }
    if (i ==0){
        ok=1;
    }
    else {
        int j = n;
        while (a[j] < a[i]){
            j--;
        }
        swap(a[i], a[j]);
        int l = i+1;
        int r = n;
        while ( l < r){
            swap(a[r], a[l]);
            l++; r--;
        }
    }
}


int main (){
    int t; cin >> t;
    while ( t--){
        cin >> n;
        ok =0;
        khoiTao();
        while ( ok ==0){
            for ( int i =1; i <=n; i++){
                cout << a[i];
            }
            cout << " ";
            sinhHoanVi();
        }
        cout << endl;
    }
}