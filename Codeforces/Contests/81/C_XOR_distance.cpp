#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
vector<ll>cB(ll n){
    vector<ll> ans;
    while(n){
        ans.push_back(n % 2);
        n /= 2;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
void solve(){
    ll a, b, r;
    cin >> a >> b >> r;
    if(b>a)swap(a, b);
    vector<ll> A; // always largest
    vector<ll> B;
    A = cB(a);
    B = cB(b);
    reverse(B.begin(), B.end());
    while(B.size()<A.size()){
        B.push_back(0);
    }
    reverse(B.begin(), B.end());
    ll x = 0;
    bool isfst = false;
    for (ll i = 0;i<A.size();i++){
       if(A[i]!=B[i]){
         if(!isfst){
             if(A[i]==0){
                if(x+(1<<(A.size()-i-1))<=r){
                 x += (1 << (A.size() - i - 1));
                 isfst = true;
                }
             }
             else{
                 isfst = true;
             }
         }
         else{
            if(A[i]==1){
                if(x+(1<<(A.size()-i-1))<=r){
                    x += (1 << (A.size() - i - 1));
                }
            }
         }
       }
    }
    cout << abs((a ^ x) - (b ^ x)) << "\n";
}
int main(){
ios_base:: sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}