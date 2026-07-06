#include <bits/stdc++.h>
using namespace std;
 
const string endings[] = {"00", "25", "50", "75"};
 
void solve() {
    string s;
    cin >> s;
    int n = s.length();
    int ans = n;
 
    for (const string& e : endings) {
        int pos = 1;
        int ops = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == e[pos]) {
                pos--;
                if (pos < 0) {
                    ans = min(ans, ops);
                    break;
                }
            } else {
                ops++;
            }
        }
    }
    
    cout << ans << "
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