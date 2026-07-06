#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    if(n==1){
        cout<<"1
";
        return;
    }
    vector<int> a;
    a.push_back(v[0]);
    a.push_back(v[1]);
    for(int i=2;i<n;i++){
        int m=a.size();
        int x=a[m-2]-a[m-1],y=a[m-1]-v[i];
        if(x>0){
            if(y>0) a[m-1]=v[i];
            else if(y<0) a.push_back(v[i]);
        }else{
            if(y<0) a[m-1]=v[i];
            else if(y>0) a.push_back(v[i]);
        }
    }
    cout<<a.size()-(a[0]==a[1])<<"
";
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}