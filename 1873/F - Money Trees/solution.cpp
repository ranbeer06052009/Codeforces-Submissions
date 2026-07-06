#include <bits/stdc++.h>
 
using namespace std;
using ll=long long;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 
// int lcm(int a, int b) {
//     return (a*b)/__gcd(a, b);
// }
// // Returns gcd(a, b) and updates x and y to solve: ax + by = gcd(a, b)
// int extGCD(int a, int b, int &x, int &y) {
//     if (b == 0) {
//         x = 1;
//         y = 0;
//         return a;
//     }
//     int x1, y1;
//     int d = extGCD(b, a % b, x1, y1);
//     x = y1;
//     y = x1 - y1 * (a / b);
//     return d;
// }
// bool find_any_solution(int a, int b, int c, int &x0, int &y0, int &g) {
//     g= extGCD(abs(a), abs(b), x0, y0);
//     if (c%g!= 0) {
//         return false;
//     }
    
//     x0*=c/g;
//     y0*=c/g;
//     if(a<0)x0= -x0;
//     if(b<0)y0= -y0;
//     return true;
// }
 
// //Topological Sort
// vector<int> topoSort(int &V, vector<vector<int>> adj){
//     int indegree[V];
//     for(int i=0; i<V; i++)indegree[i]=0;
//     for(int i=0; i<V; i++){
//         for(auto it:adj[i]){
//             indegree[it]++;
//         }
//     }
//     queue<int> q;
//     for(int i=0; i<V; i++){
//         if(indegree[i]==0)q.push(i);
//     }
//     vector<int> topo;
//     while(!q.empty()){
//         int node=q.front();
//         q.pop();
//         topo.push_back(node);
//         for(auto it:adj[node]){
//             indegree[it]--;
//             if(indegree[it]==0)q.push(it);
//         }
//     }
//     return topo;
// }
 
// bool palindrome(ll n){
//     string num=to_string(n);
//     int l=0,r=num.size()-1;
//     while(l<r){
//         if(num[l]!=num[r])return false;
//         l++;
//         r--;
//     }
//     return true;
// }
void solve(){
    int n;ll k;
    cin>>n>>k;
    vector<int> a(n+1,0);
    vector<ll> h(n+1,0),pref(n+1,0);
    for(int i=1; i<=n; i++){
        cin>>a[i];
        pref[i]=pref[i-1]+a[i];
    }
    for(int i=1; i<=n; i++)cin>>h[i];
    vector<pair<int,int>> v;
    int st=1;
    for(int i=1; i<n; i++){
        if(h[i]%h[i+1]==0){            
            continue;
        }else{
            v.push_back({st,i});
            st=i+1;
        }
    }
    v.push_back({st,n});
    int ans=0;
    for(auto it:v){
        int i=it.first;
        int j=it.second;
        int l=i;
        for(int r=i; r<=j; r++){
            while(l<=r&&(pref[r]-pref[l-1])>k){
                l++;
            }
            ans=max(ans,r-l+1);
        }
    }
    cout<<ans;
    return;
}
 
int main(){
    fastio();
    int tt=1;
    cin>>tt;
    while(tt--){
        solve();
        cout<<'
';
    }
    return 0;
}