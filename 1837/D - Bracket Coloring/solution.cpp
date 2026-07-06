#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> bal(n);
    int mn=0, mx=0;
    for(int i=0;i<n;i++){
        bal[i]=(i?bal[i-1]:0)+(s[i]=='('?1:-1);
        mn=min(mn,bal[i]);
        mx=max(mx,bal[i]);
    }
    
    if(bal[n-1]!=0){
        cout<<"-1
";
        return;
    }
    
    if(mn==0 || mx==0){
        cout<<"1
";
        for(int i=0;i<n;i++) cout<<"1 ";
        cout<<"
";
        return;
    }
    
    cout<<"2
";
    for(int i=0;i<n;i++){
        if(bal[i]>0) cout<<"1 ";
        else if(bal[i]<0) cout<<"2 ";
        else cout<<(bal[i-1]>0?"1 ":"2 ");
    }
    cout<<"
";
}
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}