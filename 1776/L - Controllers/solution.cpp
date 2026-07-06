#include <bits/stdc++.h>
 
using namespace std;
#define int long long
int lcm(int a, int b) {
    return (a * b) / __gcd(a, b);
}
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s; 
    int c1 = count(s.begin(), s.end(), '+'); 
    int c2 = n - c1;
    int plus=0,minus=0;
    int q;
    cin >> q;
    while (q--) {
        int a, b;
        cin >> a >> b;
        if (c1 == c2) {
            cout << "YES
";
            continue;
        }
        if (a == b) {
            cout << "NO
";
            continue;
        }
        int l = lcm(a, b); 
        int x = l / a, y = l / b;
        if (abs(c2 - c1) % abs(y - x) == 0) {
            int p = abs(c2 - c1) / abs(y - x);
            if ((x + y) * p > n) {
                cout << "NO
";
            } else {
                cout << "YES
";
            }
        } else {
            cout << "NO
";
        }
        
    }
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}