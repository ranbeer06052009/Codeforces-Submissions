#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
    int n;
    cin >> n;
    
    map<int, int> f;
    ll a = 0;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a += f[x - i]++;
    }
    
    cout << a << "
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