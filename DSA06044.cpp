#include <bits/stdc++.h>
using namespace std;

int main (){
    int n, a[n];
    cin >> n;
    for ( int i =0; i < n; i++){
        cin >> a[i];
    }
    set <int> le;
    set <int> chan;
    for (int i =0; i < n; i++){
        if (i % 2 ==0){
            le.insert(a[i]);
        }
        else{
            chan.insert(a[i]);
        }
    }
    auto it1 = le.begin();
    auto it2 = chan.rbegin();

    while(it1 != le.end() || it2 != chan.rend()){
       if (it1 != le.end()){
        cout << *it1 << " ";
        it1++;
       }
       if (it2 !=chan.rend()){
        cout << *it2 << " ";
        it2++;
       }
    }
}