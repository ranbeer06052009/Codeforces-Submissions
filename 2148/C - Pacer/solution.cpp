#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long m;
        cin >> n >> m;
 
        vector<long long> a(n+1);
        vector<int> b(n+1);
 
        a[0] = 0;
        b[0] = 0;
 
        for (int i = 1; i <= n; i++) {
            cin >> a[i] >> b[i];
        }
 
        long long ans = 0;
        for (int i = 1; i <= n; i++) {
            long long dt = a[i] - a[i-1];
            int startSide = b[i-1];
            int endSide = b[i];
            if ((dt % 2) == (startSide ^ endSide)) {
                ans += dt;
            } else {
                ans += dt - 1;
            }
        }
 
        ans += m - a[n];
 
        cout << ans << "
";
    }
 
    return 0;
}