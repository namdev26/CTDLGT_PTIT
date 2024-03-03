#include <bits/stdc++.h>
using namespace std;

bool kiemTraSNT(int n){
    if (n ==0 || n==1) return false;
    for (int i =2; i<= sqrt(n); i++){
        if (n % i ==0) return false;
    }
    return true;

}

int main (){
    int t; cin >> t;
    while (t--){
        long long n ; cin >> n;
        int ok =0;
        for (int i =2; i <= n/2; i++){
            if (kiemTraSNT(i) && kiemTraSNT(n-i)){
                cout << i << " " << n-i << endl;
                ok =1;
                break;
            }
        }
        if(ok ==0) cout << "-1" << endl;
    }
}