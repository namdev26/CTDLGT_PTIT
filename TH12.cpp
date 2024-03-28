#include <bits/stdc++.h>
using namespace std;

long long sum;
int res;

void test(){
    long long n, k;
    cin >> n >> k;
    multiset<long long> m;
    for (long long i =0; i < n; i++){
        int x; cin >> x;
        m.insert(x);
    }
    sum =0;
    while(m.size()!=1 && m.size() >= k){
        long long x = *m.begin();
        m.erase(m.find((*m.begin())));
        long long tmp = x;
        long long y, i =1;
        while(i <k){
            y= *m.begin();
            m.erase(m.find(*m.begin()));
            tmp +=y;
            i++;
        }
        sum += (y-x);
        m.insert(tmp);
    }
    if (m.size() !=1){
        long long x = *m.begin();
        m.erase(m.find(*m.begin()));
        long long y, tmp =x;
        while(m.size()!=0){
            y = *m.begin();
            m.erase(m.find(*m.begin()));
            tmp += y;
        }
        sum += (y-x);
        m.insert(tmp);
    }
    cout << *m.begin() << endl;
    cout << sum << endl;
}

int main(){
    test();
}