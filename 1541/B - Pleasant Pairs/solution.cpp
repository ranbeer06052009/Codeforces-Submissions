#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
    int n;
    cin >> n;
    
    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
 
    int c = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = a[i] - (i % a[i]); j <= n; j += a[i]) {
            if (j > i && a[i] * a[j] == i + j) {
                c++;
            }
        }
    }
 
    cout << c << "
";
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}