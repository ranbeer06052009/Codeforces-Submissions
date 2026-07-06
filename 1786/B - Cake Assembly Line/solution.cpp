#include <bits/stdc++.h>
 
using namespace std;
using ll= long long;
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
// void sieve(ll MAX_VAL, map<ll,int> &spf) {
//     for(int i=1; i<MAX_VAL;i++)spf[i]=i;
//     for (int i=2; i*i<MAX_VAL;i++) {
//         if(spf[i]==i) {
//             for(int j=i*i; j<MAX_VAL; j+=i) {
//                 if(spf[j]==j)spf[j]=i;
//             }
//         }
//     }
// }
 
// void add_prime_fac(ll n, map<ll,int>& factors) {
//     for (ll i=2; i*i<=n; i++) {
//         while(n%i==0) {
//             factors[i]++;
//             n/=i;
//         }
//     }
//     if(n>1){
//         factors[n]++;
//     }
// }
// void generate_div(map<ll,int>::iterator it,map<ll,int> &spf, ll cur_div,vector<ll> &div){
//     if(it==spf.end()){
//         div.push_back(cur_div);
//         return;
//     }
//     ll p=it->first;
//     ll cnt=it->second;
//     ll m=1;
//     auto it1=it;
//     it1++;
//     for(int i=0;i<=cnt;i++){
//         generate_div(it1,spf,cur_div*m,div);
//         if(i<cnt)m*=p;
//     }
//     return;
// }
void solve() {
    int n,w,h;
    cin>>n>>w>>h;
    vector<ll>a(n+1,0),b(n+1,0);
    ll ml=1e9,mr=-1e9;
    for(int i=1; i<=n; i++)cin>>a[i];
    for(int i=1; i<=n; i++)cin>>b[i];
    for(int i=1; i<=n; i++){
        ml=min(ml,(b[i]-h)-(a[i]-w));
        mr=max(mr,(b[i]+h)-(a[i]+w));
    }
    if(ml<mr){
        cout<<"No";
    }else{
        cout<<"Yes";
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