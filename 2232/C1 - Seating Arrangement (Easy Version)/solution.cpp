#include <bits/stdc++.h>
 
using namespace std;
using ll= long long;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 
int lcm(int a, int b) {
    return (a*b)/__gcd(a, b);
}
// Returns gcd(a, b) and updates x and y to solve: ax + by = gcd(a, b)
int extGCD(int a, int b, int &x, int &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int d = extGCD(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}
bool find_any_solution(int a, int b, int c, int &x0, int &y0, int &g) {
    g= extGCD(abs(a), abs(b), x0, y0);
    if (c%g!= 0) {
        return false;
    }
    
    x0*=c/g;
    y0*=c/g;
    if(a<0)x0= -x0;
    if(b<0)y0= -y0;
    return true;
}
 
//Topological Sort
vector<int> topoSort(int &V, vector<vector<int>> adj){
    int indegree[V];
    for(int i=0; i<V; i++)indegree[i]=0;
    for(int i=0; i<V; i++){
        for(auto it:adj[i]){
            indegree[it]++;
        }
    }
    queue<int> q;
    for(int i=0; i<V; i++){
        if(indegree[i]==0)q.push(i);
    }
    vector<int> topo;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        topo.push_back(node);
        for(auto it:adj[node]){
            indegree[it]--;
            if(indegree[it]==0)q.push(it);
        }
    }
    return topo;
}
 
void solve(){
    int n,x,s;
    cin>>n>>x>>s;
    string u;
    cin>>u;
    vector<int> a(x+1,-1);
    a[0]=0;
    for(char c:u){
        vector<int>b=a;
        for(int j=0; j<=x; j++){
            if(a[j]==-1)continue;
            int k=a[j];
            int d=j*s-k;
            if((c=='I'||c=='A')&&j<x){
                b[j+1]=max(b[j+1],k+1);
            }
            if((c=='E'||c=='A')&&d>0){
                b[j]=max(b[j],k+1);
            }
        }
        a=b;
    }
    int cnt=0;
    for(int i=0; i<=x; i++){
        cnt=max(cnt,a[i]);
    }
    cout<<cnt;
    return;
}
 
int main(){
    fastio();
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<'
';
    }
    return 0;
}