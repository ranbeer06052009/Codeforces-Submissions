#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
    int n;
    ll k;
    cin>>n>>k;
    
    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        cin >>v[i];
    }
    sort(v.begin(), v.end());
 
    int l = 0, r = 1;
    
    while (l< n && r< n) {
        ll diff = v[r] - v[l];
        if (l != r && diff == k) {
            cout << "YES
";
            return;
        } else if (diff < k) {
            r++; 
        } else {
            l++; 
        }
    }
 
    cout << "NO
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