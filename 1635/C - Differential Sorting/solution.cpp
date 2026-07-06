#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
 
    if (v[n - 2] > v[n - 1]) {
        cout << "-1
";
        return;
    }
 
    if (v[n - 1] >= 0) {
        cout << n - 2 << "
";
        for (int i = 1; i <= n - 2; i++) {
            cout << i << " " << n - 1 << " " << n << "
";
        }
    } else {
        if (is_sorted(v.begin(), v.end())) {
            cout << "0
";
        } else {
            cout << "-1
";
        }
    }
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; 
    cin >> t;
    while (t--) solve();
    return 0;
}