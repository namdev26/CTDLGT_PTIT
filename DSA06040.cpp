#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int n,k,m;
        cin >> n >> k >> m;
        long long a[n];
        long long b[k];
        long long c[m];
        for ( int i =0; i < n; i++){
            cin >> a[i];
        }
        for ( int i =0; i < k; i++){
            cin >> b[i];
        }
        for ( int i =0; i < m; i++){
            cin >> c[i];
        }
        vector <int> ve;
        int i=0,j =0, h =0;
        while(i < n && j < k && h < m){
            if(a[i] == b[j] && b[j] == c[h]){
                ve.push_back(a[i]);
                i++;j++;h++;
            }
            else if (a[i] < b[j]){
                i++;
            }
            else if (b[j] < c[h]){
                j++;
            }
            else h++;
        }
        if (ve.size() ==0) cout << "-1" << endl;
        else {
            for (int i =0; i < ve.size();i++){
                cout << ve[i] << " " ;
            }
            cout << endl;
        }
    }
}