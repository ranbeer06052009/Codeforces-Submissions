#include <bits/stdc++.h>
 
using namespace std;
#define int long long
 
int lcm(int a, int b) {
    return (a*b)/__gcd(a, b);
}
 
bool check(int &x,vector<int> &a,int &k,int &n){
    for(int i=0; i<n;i++){
        int cst=0;
        for(int j=i,y=x;j<n;j++,y--){
            if(y<=a[j])break;
            if(j==n-1)cst+=1e9;
            else cst+=y-a[j];
        }
        if(cst<=k)return true;
    }
    return false;
}
 
void solve() {
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int l=*max_element(a.begin(),a.end());
    int r=l+n;
    int ans=l;
    while(l<=r){
        int mid=(r+l)/2;
        if(check(mid,a,k,n)){
            ans=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    cout<<ans;
    return;
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        solve();
        cout<<'
';
    }
    return 0;
}