#include <bits/stdc++.h>
using namespace std;
void sinh(const vector <string> & tu, set<string>& tonghop, string hientai, int index){
    for ( int i = index; i <tu.size(); i++){
        hientai += tu[i];
        tonghop.insert(hientai);
        sinh(tu, tonghop,hientai, i+1);
        hientai.erase(hientai.size()-tu[i].size());
    }
}
int main (){
    int tuso;
    cin >> tuso;
    vector <string> tu(tuso);
    for (int i=0; i<tuso; ++i){
        cin  >> tu[i];

    }
    set <string> tonghop;
    sinh(tu, tonghop, "", 0);
    for (const string& i : tonghop){
        cout << i  << endl;
    }
}