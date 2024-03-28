#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        string a;
        cin >> a;
        int n = a.size();
        int ok =0;
        for ( int i =0; i < n; i++){
            if (a[i] =='1'){
                ok ++;
            }
        }
        if (ok ==0) {
            for ( int i =0; i < n; i++){
                a[i] ='1';
            }
        }
        else {
            for ( int i = n-1; i >=0; i--){
                if (a[i] == '1'){
                    a[i] = '0';
                    for ( int j = i+1; j < n; j++){
                        a[j] = '1';
                    }
                    break;
                }
            }
        }
        for (int i =0; i < n; i++){
            cout << a[i];
        }
        cout << endl;
    }
}