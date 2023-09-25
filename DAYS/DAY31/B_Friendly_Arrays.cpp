#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,m;
cin>>n>>m;
ll a[n];
ll b[m];
forn(i,n)cin>>a[i];
forn(i,m)cin>>b[i];
    ll xor_arr;
    ll xor_with_b;
    ll or_val;
    forn(i,m){
       if(!i)or_val=b[i];
       else{
        or_val|=b[i];
       }
    }
    forn(i,n){
        if(!i){
            xor_arr=a[i];
            xor_with_b=(a[i] | or_val);
        }
        else{
            xor_arr^=a[i];
            xor_with_b^=(a[i] | or_val);
        }
    }
if(n%2==0){
    cout<<xor_with_b<<" "<<xor_arr<<"\n";
}
else{
    cout<<xor_arr<<" "<<xor_with_b<<"\n";
}
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}