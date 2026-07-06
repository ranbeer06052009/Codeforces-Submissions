#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    char c;
    cin >> n >> c;
    string s;
    cin >> s;
 
    bool all_c = true;
    for (int i = 0; i < n; i++) {
        if (s[i] != c) {
            all_c = false;
            break;
        }
    }
 
    if (all_c) {
        cout << "0
";
        return;
    }
 
    for (int i = 1; i <= n; i++) {
        bool possible = true;
        for (int j = i; j <= n; j += i) {
            if (s[j - 1] != c) {
                possible = false;
                break;
            }
        }
        if (possible) {
            cout << "1
" << i << "
";
            return;
        }
    }
 
    cout << "2
" << n - 1 << " " << n << "
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