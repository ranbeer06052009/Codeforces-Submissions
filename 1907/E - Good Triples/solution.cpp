#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;;
 
void solve() {
    string n;
    cin>>n;
    ll ans=1;
    vector<int> ways(10, 0);
	for (int i= 0; i <= 9; i++) {
		for (int j= 0; j <= 9; j++) {
			for (int k= 0; k <= 9; k++) {
				if (i + j + k < 10) ways[i + j + k]++;
			}
		}
	}
    for (char ch:n){
    	ans*=ways[ch-'0'];
	}
 
	cout<<ans;
    return;
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        solve();
        cout << '
';
    }
}