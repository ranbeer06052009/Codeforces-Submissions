#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    vector<long long> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    long long ans=0;
    for(int i=n-2;i>=0;i--){
        while(a[i]>=a[i+1] && a[i]>0){
            a[i]/=2;
            ans++;
        }
        if(a[i]>=a[i+1]){
            cout<<"-1
";
            return;
        }
    }
    cout<<ans<<"
";
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}