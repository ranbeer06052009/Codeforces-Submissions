#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    vector<vector<int>> v(n);
    map<int,int> c;
    for(int i=0;i<n;i++){
        int k; cin>>k;
        v[i].resize(k);
        for(int j=0;j<k;j++){
            cin>>v[i][j];
            c[v[i][j]]++;
        }
    }
    for(int i=0;i<n;i++){
        bool ok=1;
        for(int x:v[i]){
            if(c[x]==1){ ok=0; break; }
        }
        if(ok){
            cout<<"Yes
";
            return;
        }
    }
    cout<<"No
";
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}