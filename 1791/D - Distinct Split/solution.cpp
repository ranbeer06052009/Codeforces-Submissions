#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    string s; cin>>s;
    vector<int> rc(256,0);
    int rd=0;
    for(char c:s) if(rc[c]++==0) rd++;
    int ans=rd, ld=0;
    vector<bool> ls(256,false);
    for(int i=0;i<n;i++){
        char c=s[i];
        if(!ls[c]){ ls[c]=true; ld++; }
        if(--rc[c]==0) rd--;
        ans=max(ans,ld+rd);
    }
    cout<<ans<<"
";
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}