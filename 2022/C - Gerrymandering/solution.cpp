#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    string a[2]; cin>>a[0]>>a[1];
    vector<array<int,3>> dp(n+5,{0,0,0});
    auto w=[&](int r1,int c1,int r2,int c2,int r3,int c3){
        return (a[r1][c1]=='A')+(a[r2][c2]=='A')+(a[r3][c3]=='A')>=2;
    };
    for(int i=n-1;i>=0;i--){
        for(int d=0;d<3;d++){
            int j=i+d-1;
            if(j<0||j>=n) continue;
            int ans=0;
            if(max(i+2,j+2)<n) ans=max(ans,w(0,i,0,i+1,0,i+2)+w(1,j,1,j+1,1,j+2)+dp[i+3][d]);
            if((d==1||d==2)&&i+1<n&&j<n) ans=max(ans,w(0,i,0,i+1,1,j)+dp[i+2][d-1]);
            if((d==0||d==1)&&i<n&&j+1<n) ans=max(ans,w(0,i,1,j,1,j+1)+dp[i+1][d+1]);
            dp[i][d]=ans;
        }
    }
    cout<<dp[0][1]<<"
";
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}