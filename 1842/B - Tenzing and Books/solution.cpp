#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,x; cin>>n>>x;
    vector<int> p[3];
    for(int i=0;i<3;i++){
        int s=0; p[i].push_back(s);
        for(int j=0;j<n;j++){
            int a; cin>>a;
            if((s|a)!=s){ s|=a; p[i].push_back(s); }
        }
    }
    bool ok=false;
    for(int a:p[0]){
        for(int b:p[1]){
          for(int c:p[2]){
              if((a|b|c)==x) ok=true; 
          }  
        }
    }
    cout<<(ok?"YES":"NO");
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        solve();
        cout<<'
';
    } 
    return 0;
}