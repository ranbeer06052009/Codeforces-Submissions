#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
const int mod = 1e9 + 7;
const int MAXM=1e7;
// Captain levi Ackerman:
//  "The only thing we're allowed to do is believe that we won't regret the choice we made."
//  "The world doesn’t care about your pain — only your will to rise again."
//  " Sometimme to find the way you must loose yourself in the grind"
//  " No matter what kind of wisdom dictates the option you should pick No one will be able to tell if it's right or wrong until you arrive at some sort of outcome"
 
// Eren yeager:
// "If you win, you live. If you lose, you die. If you don't fight, you can't win! So Fight ! Just Fight!"
// "You'll Never Know. If You're Not The One Who's Continuing To Take That Path... Unless You Keep Moving Forward."
 
// Commander Erwin Smith :
// "If you begin to regret, you’ll dull your future decisions and let others make your choices for you. Nobody can foretell the outcome. Each decision you make holds meaning only by affecting your next decision."
 
// // Returns gcd(a, b) and updates x and y to solve: ax + by = gcd(a, b)
ll extGCD(ll a, ll b, ll &x, ll &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    ll x1, y1;
    ll d = extGCD(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}
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
void swap(ll &a, ll &b){
    ll temp=a;
    a=b;
    b=temp;
}
ll gcd(ll a, ll b) {
    while(b) { 
        a %= b; 
        swap(a, b); 
    } 
    return a; 
}
 
ll lcm(ll a, ll b) { 
    if (a == 0 || b == 0) return 0;
    return (a / gcd(a, b)) * b; 
}
// ll nCr(int n, int r) {
//     if(r< 0||r> n) return 0;
//     if(r== 0 || r == n) return 1;
//     if(r > n / 2) r = n - r;
//     ll ans = 1;
//     for (int i = 1; i <= r; i++) {
//         ans =ans*(n-i+1)/i;
//     }
//     return ans;
// }
ll crt(ll r1, ll m1, ll r2, ll m2){
    ll x,y;
    ll g=extGCD(m1,m2,x,y);
    if((r2-r1)%g!=0)return -1;
    ll m=m1/g*m2;
    ll temp=r1+x*((r2-r1)/g)%(m2/g)*m1;
    ll t=(temp%m+m)%m;
    return t;
} 
 
void solve()
{
    int n;
    cin>>n;
    vector<int> l(n+1,0),r(n+1,0),u(n+1,0),v(n+1,0);
    for(int i=1; i<=n; i++){
        cin>>l[i]>>r[i]>>u[i]>>v[i];
        // for(int j=i; j<=n; j++){
        //     int k=j-i+1;
        //     bool f1=true,f2=true;
        //     if(i>=l&&i<=r)f1=false;
        //     if(k>=u&&k<=v)f2=false;
        //     if(f1&&f2)ans[j]++;
        // }
    }
    for(int m=n; m>=1; m--){
        int j=1;
        for(int i=1; i<=n; i++){
            if(j>m)break;
            bool f1=(j<l[i]||j>r[i]);
            bool f2=(m-j+1<u[i]||m-j+1>v[i]);
            if(f1&&f2){
                j++;
            }
        }
        if(j>m){
            cout<<m;
            return;
        }
    }
    cout<<0;
    return;
}
 
int main()
{
    fastio();
    int tt = 1;
    cin >> tt;
    while (tt--)
    {
        solve();
        cout << '
';
    }
    return 0;
}