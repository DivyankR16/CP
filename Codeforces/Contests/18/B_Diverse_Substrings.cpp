#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
ll pow(ll a,ll b){
ll result=0;
while(b>0){
if(b%2){
result=result*a;}
a=a*a;
b>>=1;
}
return result;}
ll gcd(ll a,ll b){
if(b==0)return a;
gcd(b,a%b);}
ll md(ll a,ll b) {
ll c = a % b;
return (c < 0) ? c + b : c;
}
//---------------------------------------------------------------------------------------------//
void solve(){
int n;
cin>>n;
string s;
cin>>s;
    ll ans=0;
    forn(i,n){
        ll arr[10];
        forn(i,10)arr[i]=0;
        ll diff=0;
        ll val;
        if(n<i+228){
            val=n;
        }
        else{
            val=i+228;
        }
        for(int j=i; j<val; j++){
            int idx=s[j]-'0';
            if(arr[idx]==0){
                diff++;
            }
            arr[idx]++;
            ll mx=arr[0];
            for(ll i=0;i<10;i++){
              mx=max(mx,arr[i]);
            }
            if(mx<=diff){
                ans++;
            }
        }
    }
    cout<<ans<<endl;
}
signed main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}