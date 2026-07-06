#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
    ll w, h;
    cin >> w >> h;
    
    ll max_area = 0; 
    
    for (int i = 0; i < 4; i++) {
        int k;
        cin >> k;
        
        ll first = 0, last = 0;
        for (int j = 0; j < k; j++) {
            ll x;
            cin >> x;
            if (j == 0) first = x;
            if (j == k - 1) last = x;
        }
        
        ll base = last - first;
        ll height = (i < 2) ? h : w; 
        
        max_area = max(max_area, base * height);
    }
    
    cout << max_area << "
";
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}