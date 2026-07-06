#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
 
    sort(a.begin(), a.end());
    vector<pair<int, int>> v;
    for(int x : a){
        if(v.empty() || v.back().first != x) v.push_back({x, 1});
        else v.back().second++;
    }
 
    while(!v.empty()){
        int sz = v.size();
        
        if(v.back().second % 2 == 0){
            cout << "YES
";
            return;
        }
        if(sz == 1){
            cout << "NO
";
            return;
        }
        if(v.back().first - v[sz - 2].first <= k){
            cout << "YES
";
            return;
        }
        
        v.pop_back();
    }
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}