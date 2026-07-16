#include <bits/stdc++.h>
 
using namespace std;
using ll=long long;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
const int MAXM=1e5;
bool is_prime[MAXM + 1];
vector<int> primes;
 
// void is_prime(){
//     for(int i=0;i<=MAXM;i++){
//         prime[i]=1;
//     }
//     prime[0]=prime[1]=0;
//     for(int i=2;i*i<=MAXM;i++){
//         if(prime[i]){
//             for(int j=i*i;j<=MAXM;j+=i){
//                 prime[j]=0;
//             }
//         }
//     }
// }
void sieve() {
    fill(is_prime, is_prime + MAXM + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= MAXM; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= MAXM; j += i) {
                is_prime[j] = false;
            }
        }
    }
    for (int i = 2; i <= MAXM; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }
}
 
int spf(ll x) {
    for (int p : primes) {
        if (x % p != 0) {
            return p;
        }
    }
    return -1; 
}
 
void solve(){
    int n;
    cin>>n;
    vector<ll> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=1e9;
    for(int i=0;i<n;i++){
        ans=min(ans,spf(arr[i]));
    }
    if(ans==1e9){
        cout<<-1;
    }
    else{
        cout<<ans;
    }
    return;
}
 
int main(){
    fastio();
    int tt=1;
    cin>>tt;
    sieve();
    while(tt--){
        solve();
        cout<<'
';
    }
    return 0;
}