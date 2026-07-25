#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n, x;
    cin >> n >> x;
    
    vector<long long> cost(n);
    for (int i = 0; i < n; i++) {
        cin >> cost[i];
    }
    
    sort(cost.begin(), cost.end());
    
    long long total_days = 0;
    long long current_prefix_sum = 0;
    
    for (int i = 0; i < n; i++) {
        current_prefix_sum += cost[i];
        
        if (current_prefix_sum > x) {
            break;
        }
        
        long long days_for_this_group = (x - current_prefix_sum) / (i + 1) + 1;
        total_days += days_for_this_group;
    }
    
    cout << total_days << "
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}