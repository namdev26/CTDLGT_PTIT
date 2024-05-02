#include <bits/stdc++.h>
using namespace std;

int main (){
    int t; cin >> t;
    while (t--){
        int truyVan; cin >> truyVan;
        queue <int> q;
        while (truyVan--){
            int n;
            cin >> n ;
            if (n == 1){
                cout << q.size() << endl;
            }
            else if (n == 2){
                if (q.empty()) {
                    cout << "YES" << endl;
                }
                else cout << "NO" << endl;
            }
            else if (  n== 3){
                int k; cin >> k;
                q.push(k);
            }
            else if (n ==4 && !q.empty()){
                q.pop();
            }
            else if (n==5){
                if (q.empty()){
                    cout << -1 << endl;
                }
                else {
                    cout << q.front() << endl;
                }
            }
            else if (n==6){
                if (q.empty()){
                    cout << -1 << endl;
                }
                else cout << q.back() << endl;
            }
        }
    }
}