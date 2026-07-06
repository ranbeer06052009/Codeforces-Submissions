#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> cnt(31, 0);
 
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        for(int j = 0; j < 31; j++){
            if((x >> j) & 1) cnt[j]++;
        }
    }
    
    int ans = 0;
    for(int i = 30; i >= 0; i--){
        int need = n - cnt[i];
        if(k >= need){
            ans |= (1 << i);
            k -= need;
        }
    }
    cout << ans << "
";
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}