#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 676767677;
struct SegTree {
    int n;
    vector<int> tree;
    SegTree(int n) {
        this->n = n;
        tree.assign(4*n+1,-1);
    }
 
    void update(int nd, int st, int e, int id, int val) {
        if (st==e) {
            tree[nd] = val;
            return;
        }
        int mid=(st + e)/2;
        if (st<=id && id<=mid) {
            update(2*nd, st, mid, id, val);
        }
        else{
            update(2*nd+1,mid+1,e,id, val);
        }
        tree[nd]=min(tree[2*nd], tree[2*nd+1]);
    }
 
    void update(int idx, int val) {
        update(1,0,n,idx,val);
    }
    int query_mex(int nd,int st,int e, int L) {
        if (st==e){
            return st;
        }
        int mid=(st+e)/2;
        if (tree[2*nd]<L){
            return query_mex(2*nd,st,mid,L);
        } 
        else {
            return query_mex(2*nd+1,mid+1,e,L);
        }
    }
 
    int query_mex(int L) {
        return query_mex(1,0,n,L);
    }
};
 
void solve() {
    int n;
    cin>>n;
    int m=2*n;
    vector<int> a(m);
    for (int i = 0; i<m; ++i) {
        cin>>a[i];
    }
    vector<int> T(2*m+1);
    for (int i=0;i<m; ++i) {
        T[2*i]= -1;
        T[2*i+1]=a[i];
    }
    T[2*m]= -1;
    vector<int> P(2*m+1, 0);
    int C=0, R=0;
    for (int i=0; i<=2*m; ++i) {
        int i_mirror = 2*C-i;
        if (R>i) {
            P[i]=min(R-i,P[i_mirror]);
        } 
        else {
            P[i]=0;
        }
        while (i-1-P[i]>=0&&i+1+P[i]<=2*m&&T[i-1-P[i]]==T[i+1+P[i]]) {
            P[i]++;
        }
        if (i+P[i]>R) {
            C=i;
            R= i+P[i];
        }
    }
    vector<vector<int>> queries_at_R(m);
    for (int i=0;i<=2*m; ++i) {
        if (P[i]>0) {
            int len= P[i];
            int l= (i - len) / 2;
            int r= l+len-1;
            if (l<=r) {
                queries_at_R[r].push_back(l);
            }
        }
    }
    SegTree st(n+1); 
    int ans=0;
    for (int r=0; r<m; r++) {
        st.update(a[r], r);
        for (int L:queries_at_R[r]) {
            ans=max(ans,st.query_mex(L));
        }
    }
 
    cout<<ans;
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        solve();
        cout << '
';
    }
}