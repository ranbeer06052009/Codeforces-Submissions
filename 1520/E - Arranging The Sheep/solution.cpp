#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    vector<int> p;
    for (int i = 0; i < n; i++) {
        if (s[i] == '*') {
            p.push_back(i);
        }
    }
 
    if (p.empty()) {
        cout << 0 << "
";
        return;
    }
 
    int mid = p.size() / 2;
    ll ans = 0;
 
    for (int i = 0; i < (int)p.size(); i++) {
        ans += abs(p[i] - (p[mid] - mid + i));
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