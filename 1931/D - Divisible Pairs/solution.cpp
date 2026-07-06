#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int solve(){
    
        ll n,x,y;
        cin>>n>>x>>y;
        vector<int> a(n);
        ll ans=0;
        map<int,vector<int>> mp;
        for(int i=0; i<n; i++ ){
            cin>> a[i];
            mp[a[i]%y].push_back(a[i]);
        }
        for (auto it : mp) {
			vector<int> v = it.second; 
			map<int, ll> mp1; 
			for (int i = 0; i < v.size(); i++) { // O(nlogn)
				mp1[v[i] % x]++;
			}
			for (auto it : mp1) { // O(nlogn)
				if (it.first == 0 || (it.first == x / 2 && x % 2 == 0)) {
					ll cnt = it.second;
					ans += (cnt * (cnt - 1)) / 2; 
					it.second = 0;
				} else {
					ll cnt1 = it.second;
					ll cnt2 = mp1[x - it.first];
					ans += cnt1 * cnt2;
					mp1[x - it.first] = 0;
				}
			}
		}
        cout<<ans<<"
";
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        solve();
    }
}