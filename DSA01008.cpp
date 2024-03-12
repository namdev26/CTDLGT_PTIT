#include <bits/stdc++.h>
using namespace std;

int a[1000];
int n;
int ok ;
void khoitao(){
    for ( int i=1; i <= n; i++){
        a[i]=0;
    }
}

void sinhKeTiep(){
    int i =n;
    while (i >=1 && a[i] ==1){
        a[i] =0;
        i--;
    }
    if (i==0){
        ok =0;
    }
    else {
        a[i] =1;
    }
}
// int dem (int a[], int n){
//     int dem1 =0;
//     for ( int i =0; i < n ;i++){
//         if (a[i] == 1){
//             dem1 ++;
//         }
//     }
//     return dem1;
// }

int main(){
    int t; cin >> t;
    while (t--){
        cin >> n ;
        int k; cin >> k;
        khoitao();
        ok =1;
        while (ok ==1){
            int cnt =0;
            for ( int i =1; i <= n; i++){
                if (a[i] ==1){
                    cnt ++;
                }
            }
            if (cnt == k){
                for (int i =1; i <= n;i++){
                cout << a[i] ;
                }
                cout << endl;
            }
            sinhKeTiep();
        }
    } 
}