#include <bits/stdc++.h>
using namespace std;

int main (){
    int t; cin >> t;
    queue <int> q;
    while (t--){
        string s;
        cin >> s;
        if (s == "PUSH"){
            int k; cin >> k;
            q.push(k);
        }
        else if (s == "POP"){
            if (q.empty()){
                continue;
            }
            else {
                q.pop();
            }
        }
        else if ( s== "PRINTFRONT"){
            if (!q.empty()){
                cout << q.front() << endl;
            }
            else {
                cout << "NONE" << endl;
            }
        }
    }
}