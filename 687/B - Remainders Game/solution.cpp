#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
    ll n,k;
    cin>>n>>k;
    map<long long, int> factors;
    long long temp = k;
    for (long long p = 2; p * p <= temp; p++) {
        while (temp % p == 0) {
            factors[p]++;
            temp /= p;
        }
    }
    if (temp > 1) factors[temp]++;
 
    vector<long long> prime_powers;
    for (auto &a : factors) {
        ll p=a.first, e=a.second;
        long long pe = 1;
        for (int i = 0; i < e; i++) pe *= p;
        prime_powers.push_back(pe);
    }
    vector<long long> c(n);
    for (int i = 0; i < n; i++) cin >> c[i];
 
    bool yes = true;
    for (long long pe : prime_powers) {
        bool covered = false;
        for (int i = 0; i < n; i++) {
            if (c[i] % pe == 0) {
                covered = true;
                break;
            }
        }
        if (!covered) {
            yes = false;
            break;
        }
    }
    
    cout << (yes ? "Yes" : "No") << endl;
    return;
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt = 1;
    //cin >> tt;
    while (tt--) {
        solve();
        cout << '
';
    }
}