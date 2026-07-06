#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
    int n; 
    cin >> n;
    
    ll sum = 0;
    int negs = 0;
    int min_abs = INT_MAX;
    
    for (int i = 0; i < n; ++i) {
        int x; 
        cin >> x;
        if (x < 0) {
            negs++;
            x = -x;
        }
        sum += x;
        min_abs = min(min_abs, x);
    }
    
    if (negs % 2 != 0) {
        sum -= 2 * min_abs;
    }
    
    cout << sum << "
";
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}