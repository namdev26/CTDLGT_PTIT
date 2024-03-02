#include <bits/stdc++.h>
using namespace std;
int x[1000], k, n;
void inkq(){
    for ( int i =1; i <= k; i++){
        cout << x[i];
    }
    cout << " ";
}


void Try(int i){
    for (int j = x[i-1] + 1; j <= n-k+i; j++){
        x[i] =j;
        if (i ==k){
            inkq();
        }
        else {
            Try(i + 1);
        }
    }
}

int main(){
    int t; cin >> t;
    while (t--){
        cin >>n >> k;
        Try(1);
        cout << endl;
    }
}