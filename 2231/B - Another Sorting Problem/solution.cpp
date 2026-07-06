#include <bits/stdc++.h>
 
using namespace std;
using ll=long long;;
 
void solve() {
    int n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    ll L = 0;
    bool sorted = true;
    for (int i=0; i<n-1; ++i) {
        if (a[i]>a[i+1]) {
            L=max(L, a[i] - a[i+1]);
            sorted = false;
        }
    }
    if (sorted) {
        cout<<"YES";
        return;
    }
    bool dp0= true;
    bool dp1= true;
    
    for (int i=1;i<n; ++i) {
        bool next_dp0 = false;
        bool next_dp1 = false;
        if (dp0) {
            if (a[i-1] <= a[i]) next_dp0 = true;
            next_dp1 = true; 
        }
        if (dp1) {
            if(a[i]-a[i-1] >= L) next_dp0 = true;
            if(a[i-1]<= a[i]) next_dp1 = true;
        }
        
        dp0 = next_dp0;
        dp1 = next_dp1;
    }
    
    if (dp0||dp1) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--) {
        solve();
        cout<<'
';
    }
    return 0;
}
 