#include <bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
int main (){
    int t; cin >> t;
    while (t--){
        long long n; cin >> n;
        multiset <long long> ms;
        for (int i =0; i < n; i++){
            long long k; cin >> k;
            ms.insert(k);
        }
        long long sum =0;
        while(ms.size() > 1){
            auto it = ms.begin();
            long long tmp = *it;
            it++;
            tmp = (tmp + *it) % mod;
            ms.erase(ms.begin());
            ms.erase(ms.begin());
            ms.insert(tmp);
            sum = (sum + tmp) % mod;
        }
        cout << sum << endl;
    }
}