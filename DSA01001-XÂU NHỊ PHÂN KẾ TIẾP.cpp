#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        string s;
        cin >> s;
        int ok =0;
        int n = s.size();
        while ( n >=1 && s[n-1] == '1'){
            s[n-1] = '0';
            n--;
        }
        if (n ==0){
            ok =1;
        }
        else {
            s[n-1] ='1';
        }
        cout << s << endl;
    }
}