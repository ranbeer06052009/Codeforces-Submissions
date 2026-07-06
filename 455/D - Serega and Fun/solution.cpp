#include <bits/stdc++.h>
 
using namespace std;
 
const int B = 320;
const int MB = 320;
const int N = 100005;
 
deque<int> b[MB];
int cnt[MB][N];
 
void solve() {
    int n;
    if (!(cin >> n)) return;
 
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        b[i / B].push_back(val);
        cnt[i / B][val]++;
    }
 
    int q;
    cin >> q;
    int la = 0;
 
    while (q--) {
        int type;
        cin >> type;
 
        if (type == 1) {
            int lp, rp;
            cin >> lp >> rp;
            
            int l = (lp + la - 1) % n;
            int r = (rp + la - 1) % n;
            if (l > r) swap(l, r);
 
            int L = l / B, R = r / B;
            int rl = l % B, rr = r % B;
 
            if (L == R) {
                int val = b[L][rr];
                b[L].erase(b[L].begin() + rr);
                b[L].insert(b[L].begin() + rl, val);
            } else {
                int val = b[R][rr];
                b[R].erase(b[R].begin() + rr);
                cnt[R][val]--;
 
                for (int j = R; j > L; j--) {
                    int carry = b[j - 1].back();
                    b[j - 1].pop_back();
                    cnt[j - 1][carry]--;
 
                    b[j].push_front(carry);
                    cnt[j][carry]++;
                }
 
                b[L].insert(b[L].begin() + rl, val);
                cnt[L][val]++;
            }
        } else if (type == 2) {
            int lp, rp, kp;
            cin >> lp >> rp >> kp;
 
            int l = (lp + la - 1) % n;
            int r = (rp + la - 1) % n;
            int k = (kp + la - 1) % n + 1;
            if (l > r) swap(l, r);
 
            int L = l / B, R = r / B;
            int rl = l % B, rr = r % B;
 
            int ans = 0;
 
            if (L == R) {
                for (int j = rl; j <= rr; j++) {
                    if (b[L][j] == k) ans++;
                }
            } else {
                for (int j = rl; j < b[L].size(); j++) {
                    if (b[L][j] == k) ans++;
                }
                for (int j = L + 1; j < R; j++) {
                    ans += cnt[j][k];
                }
                for (int j = 0; j <= rr; j++) {
                    if (b[R][j] == k) ans++;
                }
            }
 
            la = ans;
            cout << ans << "
";
        }
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}