#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
    int n;
    cin >> n;
    
    ll total_and;
    cin >> total_and; 
    
    for (int i = 1; i < n; i++) {
        ll x;
        cin >> x;
        total_and &= x;
    }
 
    cout << total_and << "
";
}
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(0); cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}