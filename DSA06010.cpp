#include <bits/stdc++.h>
using namespace std;

vector <int> tachSo (int a ){
    vector <int> ve;
    while (a>0){
        ve.push_back(a%10);
        a =  a/10;
    }
    return ve;
}

int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int a[n];
        for ( int i =0; i < n; i++){
            cin >> a[i];
        }
        vector <vector<int>> ve_array;
        for ( int i =0; i < n; i++){
            ve_array.push_back(tachSo(a[i]));
        }
        set <int> se;
        for (auto ve : ve_array){
            for (auto x : ve){
                se.insert(x);
            }
        }
        for ( auto x : se){
            cout << x << " ";
        }
        cout << endl;
    }
}