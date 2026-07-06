#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;
 
        vector<vector<ll>> a(n, vector<ll>(m));
        for (ll i = 0; i < n; i++)
            for (ll j = 0; j < m; j++)
                cin >> a[i][j];
 
        ll ng = 0;
        ll mn = INT_MAX;
        ll sm = 0;
 
        for (ll i = 0; i < n; i++) {
            for (ll j = 0; j < m; j++) {
                if (a[i][j] < 0)
                    ng++;
                mn = min(mn, abs(a[i][j]));
                sm += abs(a[i][j]);
            }
        }
 
        if (ng % 2 == 0)
            cout << sm << "
";
        else
            cout << sm - 2 * abs(mn) << "
";
    }
    return 0;
}