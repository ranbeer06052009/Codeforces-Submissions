#include <bits/stdc++.h>
 
using namespace std;
using ll=long long;;
 
void solve() {
    int n,k,q;
    cin>>n>>k>>q;
    int m=200000;
    vector<ll> cnt1(m+2,0),cnt2(m+1,0);
    vector<ll> ptemp(m+1,0);
    for(int i=1; i<=n; i++){
        int l,r;
        cin>>l>>r;
        cnt1[l]++;
        cnt1[r+1]--;
    }
    for(int i=1; i<=m;i++){
        cnt1[i]+=cnt1[i-1];
        if(cnt1[i]>=k)cnt2[i]++;
    }
    for(int i=1; i<=m; i++){
        ptemp[i]=ptemp[i-1]+cnt2[i];
    }
    for(int i=1; i<=q; i++){
        int a,b;
        cin>>a>>b;
        cout<<ptemp[b]-ptemp[a-1]<<'
';
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}