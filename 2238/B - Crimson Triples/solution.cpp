#include <bits/stdc++.h>
using namespace std;
using ll=long long;
 
void solve(){
    int n;
    cin>>n;
    ll cnt=0;
    for(int i=1; i<=n; i++){
        ll m=n/i;
        cnt+=(m*m);
    }
    cout<<cnt;
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    int tt=1;
    cin>>tt;
    while(tt--){
        solve();
        cout<<"
";
    }
    return 0;
}