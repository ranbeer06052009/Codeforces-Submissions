#include <bits/stdc++.h>
using namespace std;
 
vector<int> cp[1005];
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> id(1005, 0);
    for (int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        id[x] = i; 
    }
 
    int a = -1;
    for (int i = 1; i <= 1000; ++i) {
        if (!id[i]) continue;
        for (int j : cp[i]) {
            if (id[j]) {
                a = max(a, id[i] + id[j]);
            }
        }
    }
 
    cout << a << "
";
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    
    for (int i = 1; i <= 1000; ++i) {
        for (int j = 1; j <= 1000; ++j) {
            if (gcd(i, j) == 1) {
                cp[i].push_back(j);
            }
        }
    }
 
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}