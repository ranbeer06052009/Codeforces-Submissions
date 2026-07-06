#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void solve(){
    ll n; 
    cin >> n;
    vector<ll> a(n); 
    for (int i = 0; i < n; i++) { 
        cin >> a[i];
    }
 
    ll ans=INT_MIN;
    int i=0,j=0;
    ll sum=0;
    while(j<n){
        if(sum<0){
            sum=0;
            i=j;    
        }
        if(i<j){
            if((a[j]^a[j-1])&1){
                sum+=a[j];
            }else{
                sum=a[j];
                i=j;
            }
        }else{
            sum=a[j];
        }
        ans=max(ans,sum);
        j++;
    }
    cout<<ans;
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        solve();
        cout << '
';
    }
}