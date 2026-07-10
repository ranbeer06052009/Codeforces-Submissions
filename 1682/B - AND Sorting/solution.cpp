#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    int ans = (1 << 30) - 1;
    
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x != i) {
            ans &= x;
        }
    }
    
    cout << ans << "
";
}
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(0); cin.tie(0);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    
    return 0;
}