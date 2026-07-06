#include<bits/stdc++.h>
using namespace std;
using ll=long long;
template<typename T,T Def=T(),typename Op=std::plus<T>>
class segtree{
    vector<T> v;
    int N=1;
    Op op;
public:
    segtree(vector<T>& a){
        while(N<(int)a.size()) N*=2;
        v=vector<T>(2*N-1,Def);
        build(0,0,N-1,a);
    }
    T build(int i,int L,int R,vector<T>& a){
        if(L==R) return v[i]=(L<(int)a.size()?a[L]:Def);
        int M=(L+R)/2;
        return v[i]=op(build(i*2+1,L,M,a),build(i*2+2,M+1,R,a));
    }
    T get(int x){ return v[N-1+x]; }
    void upd(int x,T val,int i,int L,int R){
        if(L==R){ v[i]=val; return; }
        int M=(L+R)/2;
        if(x<=M) upd(x,val,i*2+1,L,M);
        else upd(x,val,i*2+2,M+1,R);
        v[i]=op(v[2*i+1],v[2*i+2]);
    }
    void upd(int x,T val){ upd(x,val,0,0,N-1); }
    void op_upd(int x,T val){ upd(x,op(get(x),val),0,0,N-1); }
    T qry(int ql,int qr,int i,int L,int R){
        if(R<ql || L>qr) return Def;
        if(ql<=L && R<=qr) return v[i];
        int M=(L+R)/2;
        return op(qry(ql,qr,i*2+1,L,M),qry(ql,qr,i*2+2,M+1,R));
    }
    T qry(int ql,int qr){ return qry(ql,qr,0,0,N-1); }
};
struct GcdOp{
    template<typename T>
    T operator()(const T& a,const T& b)const{ return __gcd(a,b); }
};
void solve(){
    ll n,q; cin>>n>>q;
    vector<ll> a(n);
    for(auto& x:a) cin>>x;
    vector<ll> d;
    d.reserve(max(0LL,n-1));
    for(ll i=1;i<n;i++) d.push_back(llabs(a[i]-a[i-1]));
    segtree<ll,0,GcdOp> st(d);
    while(q--){
        ll l,r; cin>>l>>r;
        --l; --r;
        cout<<st.qry(l,r-1)<<" ";
    }
    cout<<"
";
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc; cin>>tc;
    while(tc--) solve();
    return 0;
}