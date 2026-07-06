#include<bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
    int n; 
    ll k; 
    cin >> n >> k;
    
    vector<vector<int>> a(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
 
    ll cnt = 0;
    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != a[n - 1 - i][n - 1 - j]) cnt++;
        }
    }
    
    if (n % 2 != 0) {
        for (int j = 0; j < n / 2; j++) {
            if (a[n / 2][j] != a[n / 2][n - 1 - j]) cnt++;
        }
    }
 
    if (k >= cnt && ((k - cnt) % 2 == 0 || n % 2 != 0)) {
        cout << "YES
";
    } else {
        cout << "NO
";
    }
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}