#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
string s;
cin>>s;
ll n=s.size();
ll GrandAns=LONG_LONG_MIN;
forn(i,10){
    forn(j,10){
        ll val1=i;
        ll val2=j;
        ll ans=0;
        forn(k,n){
            if(s[k]==(val1+'0')){
                ans++;
                swap(val1,val2);
            }
        }
        if(i!=j && ans%2==1){
             ans--;
        }
        GrandAns=max(GrandAns,ans);
    }
}
cout<<n-GrandAns<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}