#include <bits/stdc++.h>
using namespace std;
int n, k, q = 1e9;
vector <int> x,used;
vector<string> s;
void check (){
    vector <string> b(n,"");
    for (int i =0; i < n; i++){
        for( int j =0; j <k; j++){
            b[i]+= s[i][x[j]];
        }
    }
    sort(b.begin(), b.end());
    int it1 = stoi(b[n-1]), it2= stoi(b[0]);
    q = min(q,it1-it2);
}


void Try (int i){
    for ( int j =0; j < k; j++){
        if(used[j] ==0){
            used[j] =1;
            x[i]=j;
            if (i ==k-1){
                check();
            }
            else Try(i+1);
            used[j]=0;
        }
    }
}

int main (){
    int t =1;
    while (t--){
        cin >> n >> k;
        x.resize(k);
        used.resize(k);
        s.resize(n);
        for ( int i =0; i < n; i++){
            cin >> s[i];
        }
        for ( int i =0; i < k; i++){
            x[i] = k;
        }
        Try(0);
        cout << q << endl;
    }
}