#include <bits/stdc++.h>
using namespace std;

int doi5thanh6(string a){
    int n =0;
    for ( int i =0 ; i < a.size(); i++){
        if (a[i] == '5'){
            a[i]='6';
        }
        n = n * 10 + a[i] -'0';
    }
    return n;
}

int doi6thanh5(string a){
    int n =0;
    for ( int i =0 ; i < a.size(); i++){
        if (a[i] == '6'){
            a[i]='5';
        }
        n = n * 10 + a[i] -'0';
    }
    return n;
}

int main(){
    string a, b;
    cin >> a >> b;
    cout << doi6thanh5(a) + doi6thanh5(b) << " " << doi5thanh6(a) + doi5thanh6(b) << endl;
}
