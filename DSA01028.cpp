#include<bits/stdc++.h>
using namespace std;

int n, k, ok, b[25];
set <int> s;
vector <int> a;
void ktao(){
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        s.insert(x);
    }
    for(int i = 1; i <= k; i++) b[i] = i;
    a.push_back(-1);
    for(int i : s) a.push_back(i);
    n = s.size();
     
}
void print() {
    for (int i = 1; i <= k; i++) {
        cout << a[b[i]] << ' ';
    }
    cout << endl;
}
void sinh() {
    int i = k;
    while (i > 0 && b[i] == n - k + i) {
        i--;
    }
    if(i == 0) ok = 0;
    else{
        b[i]++;
        for (int j = i + 1; j <= k; j++) {
            b[j] = b[i] + j - i;
        }
    }
}
int main() {
    ktao();
    ok = 1;
    while(ok){
        print();
        sinh();
    }
}