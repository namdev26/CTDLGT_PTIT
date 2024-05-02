#include <bits/stdc++.h>
using namespace std;

void brinary_change (int n){
    stack <int> st;
    while (n != 0){
        st.push(n % 2);
        n = n/2;
    }
    while ( !st.empty()){
        cout << st.top();
        st.pop();
    }
}

int main (){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        for ( int i =1 ; i <= n; i++){
            brinary_change(i);
            cout << " ";
        }
        cout << endl;
    }
}