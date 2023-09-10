#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,k;
cin>>n>>k;
string s;
cin>>s;
sort(s.begin(),s.end());
ll ck='a'-2;
ll cnt=0;
ll ans=0;
forn(i,n){
    if(s[i]>=ck+2){
        ck=s[i];
        cnt++;
        ans+=s[i]-'a'+1;
        if(cnt>=k){
            cout<<ans<<"\n";
            return;
        }
    }
}
cout<<-1<<"\n";
}
int main(){
solve();
return 0;
}