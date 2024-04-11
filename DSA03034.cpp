#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >> t;
    while (t--){
        int n , m , k;
        cin >> n >> m >> k;
        int a[n], b[m], c[k];
        for (int i =0; i < n; i++){
            cin >> a[i];
        }
        for (int j =0; j < m; j++){
            cin >> b[j];
        }
        for (int z =0; z < k; z++){
            cin >> c[z];
        }
        vector <int> v;
        int i =0 , j =0, z =0;
        while (i < n && j < m && z < k){
            if (a[i] == b[j] && b[j] == c[z]){
                v.push_back(a[i]);
                i++; j++; z ++;
            }
            else if (a[i] < b[j] ){
                i++;
            }
            else if (b[j] < c[z]){
                j++;
            }
            else z++;
        }
        if (v.size() ==0){
                cout << "NO" << endl;
            }
            else {
                for (auto x : v){
                    cout << x << " " ;
                }
            }
            cout << endl;
    }
}