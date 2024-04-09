#include <bits/stdc++.h>
using namespace std;
int n,ok=1;
int x[100];
void sinh(){
    int i=n-1;
    while(x[i]==1 && i>=0){
        i--;
    }
    if(i<0){
        ok=0;
    }
    else{
        x[i]=1;
        for(int j=i+1;j<n;j++) x[j]=0;
    }
}
int check(int q[],int m){
    for(int i=0;i<m-1;i++){
        if(q[i]>q[i+1]){
            return 0;
        }
    }
    return 1;
}
int main(){
    cin>>n;
    int a[n];
    for(auto &i:a) cin>>i;
    vector<string> s;
    while(ok){
        int dem=0;
        int b[100];
        for(int i=0;i<n;i++){
            if(x[i]){
                b[dem++]=a[i];
            }
        }
        string c;
        if(check(b,dem)==1 && dem>=2){
            for(int i=0;i<dem;i++){
                c+=to_string(b[i])+" ";
            }
            s.push_back(c);
        }
        sinh();
    }
    sort(s.begin(),s.end());
    for(auto x:s){
        cout<<x<<endl;
    }
}