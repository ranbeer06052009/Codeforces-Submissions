#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
 
const int inf = 1e9;
const int mod = 998244353;
 
void solve() {
    int n;
    cin >> n;
    if (n == (1 << __lg(n))){
        cout << -1;
        return;
    }
    if (n % 2 == 0) {
        vector<int> ans = {n};
        for (int i = 2; i <= n-2; i += 2) {
            ans.push_back(i+1);
            ans.push_back(i);
        }
        ans.push_back(1);
        int x = n - (1 << __lg(n));
        swap(ans[0], ans[x-1]);
        for(auto &a : ans){
            cout << a << " ";
        }
    }else {
        cout << n - 1 << " ";
        for (int i = 2; i <= n-3; i += 2) {
            cout << i+1 << " " << i << " ";
        }
        cout << n << " " << 1;
    }
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while(tt--) {
        solve();
        cout << '
';
    }
}