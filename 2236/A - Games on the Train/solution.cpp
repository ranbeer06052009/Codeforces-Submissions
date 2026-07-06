#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin >> n;
    int mn = 1e9, mx = -1e9; 
    for(int i = 0; i < n; i++){
        int h; cin >> h;
        mn = min(mn, h);
        mx = max(mx, h);
    }
    cout << mx - mn + 1 << "
";
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; 
    if(cin >> t) {
        while(t--) solve();
    }
    return 0;
}