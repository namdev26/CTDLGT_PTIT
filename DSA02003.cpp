#include <bits/stdc++.h>
using namespace std;
int n;
vector <string> v;
int a[12][12];
void Try(int i, int j, string s){
    if (i ==n && j  ==n){
        v.push_back(s);
        return;
    }  
    if (i < n && a[i+1][j] == 1){
        Try(i+1 , j , s + "D");
    }
    if (j < n && a[i][j+1] == 1){
        Try (i, j+1 , s + "R");
    }
}


int main (){
    int t; cin >> t;
    while (t--){
        cin >> n;
        v.clear();
        for (int i =1; i <= n; i++){
            for ( int j =1; j <= n; j++){
                cin >> a[i][j];
            }
        }
        if (a[1][1] ==1){
            Try (1, 1, "");
        }
        if (v.size() ==0){
            cout << -1 << endl;
        }
        else{
            for ( int i = 0; i < v.size(); i++){
                cout << v[i] << " ";
            }
            cout << endl;
        }
    }
}