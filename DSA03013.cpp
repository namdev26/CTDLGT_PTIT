#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int k = s.size();
        map <char, int> m;
        for (auto x : s){
            m[x]++;
        }
        int cntmax =0;
        for (auto x : m){
            cntmax = max(cntmax, x.second);
        }
        if (cntmax * n > k + 1){
            cout << -1 << endl;
        }
        else cout << 1 << endl;
    }
    return 0;
}