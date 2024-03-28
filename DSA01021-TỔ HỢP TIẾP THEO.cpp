#include <bits/stdc++.h>
using namespace std;

int n;
int a[1005];
int k;
int b[1005] ;
int ok;
void sinhKeTiep(){
    ok =0;
    int i = k;
    while (i >=1 && a[i] == n - k + i){
        i--;
    }
    if (i==0){
        ok = 1;
        for ( int i = 1; i <=k; i++){
            b[i]= a[i] ;
        }
    }else {
        a[i]++;
        for ( int  j= i+1; j <= k;j++){
            a[j] = a[j-1] + 1;
        }
        for ( int i =1; i <= k; i++){
            b[i] = a[i];
            
        }
    }
}

int main (){
    int t; cin >> t;
    while (t--){
        cin >> n >> k;
        int cnt =0;
        unordered_set <int> se;
        for ( int i =1; i <= k; i++){
            cin >> a[i];
            se.insert(a[i]);
        }
        sinhKeTiep();
        for ( int i =1; i <= k;i++){
            if (se.find(b[i]) == se.end()){
                cnt ++;
            }
        }
        if (ok ==1){
            cout << k << endl;
        }
        else {
            cout << cnt << endl;
        }
    }
}