#include <bits/stdc++.h>
using namespace std;

int main (){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int cnt =0;
        while (n >= 1000){
            n = n-1000;
            cnt ++;
        }
        while (n >= 500){
            n = n-500;
            cnt ++;
        }
        while (n >= 200){
            n = n-200;
            cnt ++;
        }
        while (n >= 100){
            n = n-100;
            cnt ++;
        }
        while (n >= 50){
            n = n-50;
            cnt ++;
        }
        while (n >= 20){
            n = n-20;
            cnt ++;
        }
        while (n >= 10){
            n = n-10;
            cnt ++;
        }
        while(n >= 5){
            n = n-5;
            cnt ++;
        }
       while(n >= 2){
            n = n-2;
            cnt ++;
        }
        while (n >= 1){
            n = n-1;
            cnt ++;
        }
        cout << cnt << endl;
    }
}