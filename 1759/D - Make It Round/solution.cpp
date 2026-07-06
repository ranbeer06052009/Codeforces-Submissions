#include<bits/stdc++.h>
using namespace std;
using ll=long long;
 
void solve(){
    ll n, m; cin >> n >> m;
    int c2 = 0, c5 = 0;
    ll temp = n;
    while(temp % 2 == 0) { c2++; temp /= 2; }
    while(temp % 5 == 0) { c5++; temp /= 5; }
 
    ll k = 1;
    while(c2 < c5 && k * 2 <= m) { c2++; k *= 2; }
    while(c5 < c2 && k * 5 <= m) { c5++; k *= 5; }
    while(k * 10 <= m) k *= 10;
    cout << n * ((m / k) * k) << "
";
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}