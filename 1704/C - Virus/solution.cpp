#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n, m; cin >> n >> m;
    vector<int> a(m);
    for(int i = 0; i < m; i++) cin >> a[i];
 
    sort(a.begin(), a.end());
 
    vector<int> gaps;
    for(int i = 0; i < m - 1; i++){
        gaps.push_back(a[i+1] - a[i] - 1);
    }
    gaps.push_back(a[0] + n - a[m-1] - 1);
 
    sort(gaps.rbegin(), gaps.rend());
 
    int saved = 0, days = 0;
    for(int g : gaps){
        int cur = g - days * 2;
        if(cur <= 0) break;
        
        if(cur == 1){
            saved += 1; 
            days += 1;
        } else {
            saved += cur - 1; 
            days += 2;
        }
    }
 
    cout << n - saved << "
";
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}