#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n,0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int prev=-1;
    vector<int> previous_different(n,-1);
    for (int i = 1; i < n; i++) {
        if(a[i]!=a[i-1]) prev=i-1;
        previous_different[i]=prev;
    }
    int q;
    cin>>q;
    while (q--){
        int l,r;
        cin>>l>>r;
        if(previous_different[r-1]>=l-1) 
        cout<<r<<" "<<previous_different[r-1]+1<<"
";
        else cout<<-1<<" "<<-1<<"
";
    }  
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        solve();
        cout<<"
";
    }
}