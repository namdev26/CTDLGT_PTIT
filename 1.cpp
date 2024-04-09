#include <bits/stdc++.h>
using namespace std;

int main (){
    vector <vector<string>> v;
    int n; cin >> n;
    string c;
    vector <string> s(n);
    int x[n];
    for ( int i =0; i < n; i++){
        cin >> s[i];
        x[i] = i;
    }
    cin >> c;
    do {
        if (s[x[0]] == c){
            vector <string> b(n);
            for ( int i =0; i < n; i++){
                b[i] = s[x[i]];
            }
            v.push_back(b);
        }
    } while(next_permutation(x, x+ n)); // corrected line
    sort(v.begin(), v.end());
    for (auto it : v){
        for (auto j : it){
            cout << j << " ";
        }
        cout << endl;
    }
}