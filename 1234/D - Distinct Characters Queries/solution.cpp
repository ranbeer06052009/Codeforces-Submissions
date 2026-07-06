#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin >> s;
    
    int q;
    cin >> q;
    set<int> char_pos[26];
    for (int i = 0; i < s.length(); ++i) {
        char_pos[s[i] - 'a'].insert(i + 1);
    }
 
    while (q--) {
        int type;
        cin >> type;
        
        if (type == 1) {
            int pos;
            char c;
            cin >> pos >> c;
            
            char old_c = s[pos - 1]; 
            if (old_c != c) {
                char_pos[old_c - 'a'].erase(pos);
                char_pos[c - 'a'].insert(pos);
                s[pos - 1] = c;
            }
        } else if (type == 2) {
            int l, r;
            cin >> l >> r;
            
            int distinct_count = 0;
            for (int i = 0; i < 26; ++i) {
                auto it = char_pos[i].lower_bound(l);
                if (it != char_pos[i].end() && *it <= r) {
                    distinct_count++;
                }
            }
            cout << distinct_count << "
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
        cout << '
';
    }
}