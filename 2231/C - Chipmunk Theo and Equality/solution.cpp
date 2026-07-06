#include <bits/stdc++.h>
 
using namespace std;
using ll=long long;;
 
void solve() {
    int n;
    cin>>n;
    vector<pair<int, int>> states;
    states.reserve(n * 65); 
    
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        
        int curr = val;
        int dist = 0;
        
        while (curr > 1) {
            states.push_back({curr, dist});
            if (curr % 2 == 0) {
                curr /= 2;
            } else {
                curr++;
            }
            dist++;
        }
        
        states.push_back({1, dist});
 
        if (val==1) {
            states.push_back({2, 1});
        }
    }
 
    sort(states.begin(), states.end());
 
    ll min_ops = -1;
    int m = states.size();
    
    for (int i = 0; i < m; ) {
        int j = i;
        ll current_sum = 0;
        
        while (j<m&&states[j].first==states[i].first) {
            current_sum += states[j].second;
            j++;
        }
        
        if (j-i==n) {
            if (min_ops==-1||current_sum<min_ops) {
                min_ops=current_sum;
            }
        }
        i=j;
    }
 
    cout<<min_ops;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--) {
        solve();
        cout<<'
';
    }
    return 0;
}