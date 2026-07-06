#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    int ans = 1e9; 
 
    for (char c = 'a'; c <= 'z'; c++) {
        int l = 0, r = n - 1;
        int dels = 0;
        bool possible = true;
 
        while (l < r) {
            if (s[l] == s[r]) {
                l++;
                r--;
            } else if (s[l] == c) {
                dels++;
                l++;
            } else if (s[r] == c) {
                dels++;
                r--;
            } else {
                possible = false;
                break;
            }
        }
 
        if (possible) {
            ans = min(ans, dels);
        }
    }
 
    if (ans == 1e9) {
        cout << -1 << "
";
    } else {
        cout << ans << "
";
    }
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