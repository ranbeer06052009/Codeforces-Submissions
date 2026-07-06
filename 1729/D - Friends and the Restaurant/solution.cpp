#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin >> n;
    vector<int> x(n), y(n), d(n);
    
    for(int i = 0; i < n; i++) cin >> x[i];
    for(int i = 0; i < n; i++){
        cin >> y[i];
        d[i] = y[i] - x[i];
    }
    sort(d.begin(), d.end());
    
    int l = 0, r = n - 1, ans = 0;
    while(l < r){
        if(d[l] + d[r] >= 0){
            ans++;
            l++;
            r--;
        } else {
            l++;
        }
    }
    cout << ans << "
";
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}