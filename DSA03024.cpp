#include <bits/stdc++.h>
using namespace std;

bool cmp (pair<int, int> a, pair <int,int> b){
    return a.second < b.second;
}
int main (){
    int t; cin >> t;
    while (t--){
        int n; 
        cin >> n;
        vector <pair<int, int > > v;
        for ( int i =0; i < n; i++){
            int first;
            int second;
            cin >> first >> second;
            v.push_back(make_pair(first, second));
        }
        sort(v.begin(), v.end(), cmp);
        int res = v[0].second;
        int cnt =1;
        for ( int i =1; i < n; i++){
            if( res <= v[i].first){
                cnt ++;
                res = v[i].second;
            }
        }
        cout << cnt << endl;
    }
}