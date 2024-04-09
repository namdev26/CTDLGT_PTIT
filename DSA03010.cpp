#include <bits/stdc++.h>
using namespace std;

int main (){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        multiset <int> ms;
        for ( int i =0; i < n; i++){
            int k; cin >> k;
            ms.insert(k);
        }
        long long sum = 0;
        while(ms.size() > 1) {
            auto it = ms.begin();
            int tmp = *it;
            it++;
            tmp += *it;
            ms.insert(tmp);
            sum += tmp;
            ms.erase(ms.begin());
            ms.erase(ms.begin());
        }
        cout << sum << endl;
    }
}