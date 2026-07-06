#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        long long x, y; 
        cin >> n >> m >> x >> y;
 
        // Read and ignore horizontal lasers
        for (int i = 0; i < n; i++) {
            int a; cin >> a;
        }
        // Read and ignore vertical lasers
        for (int j = 0; j < m; j++) {
            int b; cin >> b;
        }
 
        cout << (n + m) << "
";
    }
    return 0;
}