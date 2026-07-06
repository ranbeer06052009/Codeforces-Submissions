#include <bits/stdc++.h>
using namespace std;
const int MAXN = 100005;
int a[MAXN];
int next_hole[MAXN];
int jumps[MAXN];
int last_hole[MAXN];
 
int block_size;
int n, m;
int get_block(int i) {
    return (i - 1) / block_size;
}
void update_cell(int i) {
    int nxt = i + a[i];
    if (nxt > n) {
        next_hole[i] = n + 1;
        jumps[i] = 1;
        last_hole[i] = i;
    } 
    else if (get_block(i) == get_block(nxt)) {
        next_hole[i] = next_hole[nxt];
        jumps[i] = jumps[nxt] + 1;
        last_hole[i] = last_hole[nxt];
    } 
    else {
        next_hole[i] = nxt;
        jumps[i] = 1;
        last_hole[i] = i;
    }
}
 
 
void solve(){
    cin >> n >> m;
    block_size = max(1, (int)sqrt(n));
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = n; i >= 1; i--) {
        update_cell(i);
    }
    for (int q = 0; q < m; q++) {
        int type;
        cin >> type;
        if (type == 0) {
            int hole, power;
            cin >> hole >> power;            
            a[hole] = power;
            int start_of_block = get_block(hole) * block_size + 1;
            for (int i = hole; i >= start_of_block; i--) {
                update_cell(i);
            }
            
        } else if (type == 1) {
            int curr;
            cin >> curr;
            
            int total_jumps = 0;
            int final_hole = curr;
            while (curr <= n) {
                total_jumps += jumps[curr];
                final_hole = last_hole[curr]; 
                curr = next_hole[curr];
            }            
            cout << final_hole << " " << total_jumps << "
";
        }
    }
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt = 1;
    //cin >> tt;
    while (tt--) {
        solve();
        //cout << '
';
    }
}