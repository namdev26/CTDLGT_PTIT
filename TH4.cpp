#include <bits/stdc++.h>
using namespace std;
int n, k , a[1005];

void in (){
    for ( int i =1; i <= k ; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

void quayLui(int i , int ok){
    for ( int j = ok; j<=n; j++ ){
        a[i] = j;
        if (i ==k) {
            in();
        }
        else quayLui(i+1,j);
    }
}

int main(){
    cin >> n >> k;
    quayLui(1,1);
}