#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
 
    int ans = 0;
    int i = n - 1;
    while (i >= 0) {
        if (v[i] == v[n - 1]) {
            i--; 
        } else {
            ans++; 
            int sz = n - 1 - i; 
            i -= sz; 
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