#include <bits/stdc++.h>
 
using namespace std;
using ll=long long;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
const int mod=998244353;
 
// ll gcd(ll a, ll b) {
//     if (b == 0)
//         return a;
//     return gcd(b, a % b);
// }
// ll lcm(ll a, ll b) {
//     return ((ll)(a*b))/gcd(a, b);
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
    int n;
    cin>>n;
    if(n==1){
        cout<<1;
        return;
    }else if(n==2){
        cout<<-1;
        return;
    }
    // set<ll> r={2,3,6};
    // while(r.size()<n){
    //     bool f=false;
    //     ll temp=-1;
    //     for(ll x:r){
    //         ll a=x+1;
    //         ll b=x*(x+1);
    //         if(r.count(a)==0&&r.count(b)==0&&a!=b){
    //             temp=x;
    //             f=true;
    //             break;
    //         }
    //     }
    //     if(f){
    //         ll a=temp+1;
    //         ll b=temp*(temp+1);
    //         r.erase(temp);
    //         r.insert(temp+1);
    //         r.insert(temp*(temp+1));
    //     }else{
    //         ll maxm=*r.rbegin();
    //         r.erase(maxm);
    //         r.insert(maxm+1);
    //         r.insert(maxm*(maxm+1));
    //     }
    // }
    vector<ll> ans={1,2,3};
    ll cur=3;
    // for(ll x:r){
    //     cur=lcm(cur,x);
    // }
    // for(ll x:r){
    //     ans.push_back(cur/x);
    // }
    for(int i=4; i<=n; i++){
        cur=cur*2;
        ans.push_back(cur);
    }
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
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