#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    int z = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 0) z++;
    }
 
    if (z == n) {
        cout << 0 << "
";
        return;
    }
 
    int l = 0, r = n - 1;
    while (l < n && a[l] == 0) l++;
    while (r >= 0 && a[r] == 0) r--;
 
    bool mid_zero = false;
    for (int i = l; i <= r; i++) {
        if (a[i] == 0) {
            mid_zero = true;
            break;
        }
    }
 
    if (!mid_zero) {
        cout << 1 << "
";
    } else {
        cout << 2 << "
";
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}