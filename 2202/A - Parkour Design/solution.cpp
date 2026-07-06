#include <bits/stdc++.h>
using namespace std;
 
pair<long long,int> f(long long x, int y){
    pair<long long,int> a={x,y},b={x,y},c={x,y},d={0,0};
    if(x==0&&y==0) return d;
    if(x-2>=0)a=f(x-2,y-1);
    if(x-3>=0)b=f(x-3,y);
    if(x-4>=0)c=f(x-4,y+1);
    if(a==d||b==d||c==d)return d;
    return {1,1};
}
 
void solve() {
    long long x;
    long long y;
    cin>>x>>y;
    // pair<long long,int> a={0,0};
    // if(f(x,y)==a) cout<<"YES";
    // else cout<<"NO";
    long long val=x-2*y;
    if(val<0||val%3!=0){
        cout<<"NO";
        return;}
    long long k= val/3;
    long long lower=max(0LL,-y);
    long long upper= k/2;
    if(lower<=upper)cout<<"YES";
    else cout<<"NO";
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