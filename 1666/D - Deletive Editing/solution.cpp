#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    string s,t; cin>>s>>t;
    vector<int> c(26,0);
    for(char x:t) c[x-'A']++;
    string r="";
    for(int i=s.size()-1;i>=0;i--){
        if(c[s[i]-'A']>0){
            c[s[i]-'A']--;
            r+=s[i];
        }
    }
    reverse(r.begin(),r.end());
    cout<<(r==t?"YES
":"NO
");
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll tc; cin>>tc;
    while(tc--) solve();
    return 0;
}