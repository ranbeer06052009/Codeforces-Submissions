#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
    int n;
    cin >> n;
    
    ll s = 0;
    bool o= true;
    
    for(int i = 1; i <= n; i++){
        ll x;
        cin >> x;
        s += x;
        
        if (s < (1LL * i * (i + 1)) / 2) {
            o = false;
        }
    }
    
    if(o){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return ;
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
            cout<<"
" ;
        }
    }
    return 0;
}