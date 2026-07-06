#include <bits/stdc++.h>
using namespace std;
using ll=long long;
 
void solve(){
    int n,C;
    cin>>n>>C;
    vector<int> a(n+1,0),b(n+1,0);
    bool flag=true;
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    for(int i=1; i<=n; i++){
        cin>>b[i];
    }
    int ans=0;
    for(int i=1; i<=n; i++){
        if(flag&&(a[i]>=b[i])){
            ans+=(a[i]-b[i]);
        }else{
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<ans;
        return;
    }
    vector<int> c=a;
    sort(c.begin()+1,c.end());
    vector<int> d=b;
    sort(d.begin()+1,d.end());
    int cnt=0;
    for(int i=1; i<=n; i++){
        if(c[i]>=d[i]){
            cnt+=(c[i]-d[i]);
        }else{
            cout<<-1;
            return;
        }
    }
    cout<<cnt+C;
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    int tt=1;
    cin>>tt;
    while(tt--){
        solve();
        cout<<"
";
    }
    return 0;
}