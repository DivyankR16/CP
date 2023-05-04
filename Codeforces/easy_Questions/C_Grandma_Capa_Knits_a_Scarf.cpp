#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
string s;
cin>>s;
ll gf=INT_MAX;
forn(i,26){
    char need=i+'a';
    ll l=0,r=n-1,ans=0;
    while(l<r){
        if(s[l]==s[r]){
            l++;
            r--;
        }
        else{
            if(s[l]==need){
                l++;
                ans++;
            }
            else if(s[r]==need){
                r--;
                ans++;
            }
            else{
                ans=INT_MAX;
                break;
            }
        }
    }
    gf=min(ans,gf);
    }
if(gf==INT_MAX){
    cout<<-1<<endl;
}
else{
    cout<<gf<<endl;
}
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}