#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    string a[n];
    vector <string> ve;
    for ( string &it : a){
        cin >> it;
    }
    sort(a, a+ n);
    string s;
    cin >> s;
    for ( int i =0; i < n; i++){
        if (a[i] != s){
            ve.push_back(a[i]);
        }
    }
    do {
        for ( auto it : ve){
            cout << it << " ";
        }
        cout << s << endl;
    }
    while (next_permutation(ve.begin(), ve.end()));
}