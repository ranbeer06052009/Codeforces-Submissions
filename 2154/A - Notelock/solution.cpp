#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    if (!(cin >> t)) return 0;
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k;
        cin >> s;
        int ans = 0;
        int last = -1000000; 
        for (int i = 0; i < n; ++i) {
            if (s[i] == '1') {
                int idx = i + 1; 
                if (last >= idx - (k - 1)) {
                    last = idx;
                } else {
                    ++ans;
                    last = idx;
                }
            }
        }
        cout << ans << '
';
    }
    return 0;
}