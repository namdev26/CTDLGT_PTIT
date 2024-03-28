#include <bits/stdc++.h>
using namespace std;
int a[20], b[20],n,k;

bool check (){
    for ( int i =1; i <= n; i++){
        if (a[i] != b[i]){
            return 0;
        }
    }
    return 1;
}

int main(){
    int t; cin >> t;
    while (t--){
        cin >> n >> k;
        int ok =0;
        for ( int i =1; i <= k; i++){
            a[i] = i;
            cin >> b[i];
        }
        while (++ok){
            if (check()){
                cout << ok << endl;
                break;
            }
            for ( int i = k ; i >=1; i--){
                if (a[i] != n-k +i){
                    a[i]++;
                    for ( int j = i+ 1; j <=k; j++){
                        a[j] = a[j-1]+1;
                    }
                    break;
                }
            }
        }
    }
}