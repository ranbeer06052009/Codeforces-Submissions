#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 676767677;
 
void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt1=0,cnt2=0;
    for(int i=0; i<n; i++){
        if(s[i]=='(')cnt1++;
        else cnt2++;
    }
    if(cnt1!=cnt2){
        cout<<"NO";
        return;
    }
    cout<<"YES";
 
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