#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
void solve(){
    int n;
    cin>>n;
    vector<int> f(n+1,0);
    for(int i=2; i<=n; i++){
        if(f[i]==0){
            for(int j=2*i; j<=n; j+=i){
                f[j]++;
            }
        }
    }
    int cnt=0;
    for(int i=2; i<=n; i++){
        if(f[i]==2)cnt++;
    }
    cout<<cnt;
    return;
}
int main(){
    fastio();
    int tt=1;
    //cin>>tt;
    while(tt--){
        solve();
        cout<<"
";
    }
    return 0;
}