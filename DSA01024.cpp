#include <bits/stdc++.h>
using namespace std;

int main(){
    int  n , k;
    cin >> n >> k;
    cin.ignore();
    string x;
    map <string, int> m;
    vector <string> v;
    for ( int i =0; i < n; i++){
        cin >> x;
        m[x]++;
    }
    for (auto i : m){
        v.push_back(i.first);
    }
    n = v.size();
    v.insert(v.begin(), 1 , "");
    int dd[k+1];
    for ( int i = 1; i <= k; i++){
        dd[i] = i;
    }
    while(1){
        for ( int i =1; i <=k; i++){
            cout << v[dd[i]] << " ";
        }
        cout << endl;
        int ok =0;
        for ( int i = k; i >= 1; i--){
            if (dd[i] != n - k + i){
                ok =1;
                dd[i]++;
                for ( int j = i+1; j <= k; j++){
                    dd[j] = dd[j-1] +1;
                }
                break;
            }
        }
        if (ok ==0)
        return 0;
    }
}