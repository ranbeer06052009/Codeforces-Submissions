#include <bits/stdc++.h>
using namespace std;
 
#define int long long
#define all(a) a.begin(), a.end()
#define rall(a), a.rbegin(), a.rend()
 
const int mod = 1e9+7;
 
void solve() {
    int n, c;
    cin >> n >> c;
    string s;
    cin >> s;
    if (s[1] == '?') {
        s[1] = '0';
    }
    if (s[0] == '0' || s[n-1] == '0') {
        cout << -1;
        return;
    }
    s[0] = '1';
    s[n-1] = '1';
    vector<int> good;
    int cnt = 0;
    for (int i = 0; i < n-1; ++i) {
        if (s[i] == '0') {
            c /= __gcd(c, i);
        } else if (s[i] == '1') {
            c /= __gcd(c, 2ll);
        }else {
            cnt++;
            if (i % 2 == 1) {
                good.push_back(i);
            }
        }
    }
    if (c != (1 << __lg(c))) {
        int ans = 1;
        for (int i = 0; i < n-1; ++i) {
            if (s[i] == '0') {
                ans *= i;
            }else {
                ans *= 2;
            }
            ans %= mod;
        }
        cout << ans;
        return;
    }
    int w = cnt;
    int h = __lg(c);
    for (int i = 0; i < good.size(); ++i) {
        if (w < h) {
            break;
        } else {
            s[good[i]] = '0';
            w--;
        }
    }
    if (w >= h) {
        cout << -1;
        return;
    }
    int ans = 1;
    for (int i = 0; i < n-1; ++i) {
        if (s[i] == '0') {
            ans *= i;
        }else {
            ans *= 2;
        }
        ans %= mod;
    }
    cout << ans;
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        solve();
        cout << '
';
    }
}