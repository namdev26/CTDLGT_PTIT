#include <bits/stdc++.h>
using namespace std;

int main (){
    int t; cin >> t;
    while (t--){
        string s;
        cin >> s;
        int n = s.size();
        map <char, int > m;
        for (auto x : s){
            m[x]++;
        }
        int maxCnt =0;
        for (auto x : m) {
            maxCnt = max (maxCnt, x.second);
        }
        
        if (maxCnt*2 >= n  ){
            cout << -1 << endl;
        }
        else cout << 1 << endl;
    } 
}