#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    ll a,b,c; cin>>a>>b>>c;
    if((2*b-c)>0 && (2*b-c)%a==0) cout<<"YES
";
    else if((a+c)%2==0 && ((a+c)/2)>0 && ((a+c)/2)%b==0) cout<<"YES
";
    else if((2*b-a)>0 && (2*b-a)%c==0) cout<<"YES
";
    else cout<<"NO
";
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}