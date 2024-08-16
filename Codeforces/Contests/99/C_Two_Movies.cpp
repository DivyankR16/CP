#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
vector<ll>tree;
ll build(vector<ll>&a){
    ll n = a.size();
    while(__builtin_popcountll(n)!=1){
        n++;
        a.push_back(0);
    }
    forn(i,n){
        tree[i + n] = a[i];
    }
}
void solve(){
    ll n;
    cin >> n;
    ll a[n], b[n];
    forn(i, n) cin >> a[i];
    forn(i, n) cin >> b[i];
    ll m1 = 0;
    ll m2 = 0;
    forn(i,n){
        if(a[i]==b[i] && a[i]==1){
            if(m1>=m2){
                m2 += 1;
            }
            else{
                m1 += 1;
            }
        }
        else if(a[i]==b[i] && a[i]==-1){
            if(m1>=m2){
                m1 -= 1;
            }
            else{
                m2 -= 1;
            }
        }
        else if(a[i]==1 && b[i]==0)
    }

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