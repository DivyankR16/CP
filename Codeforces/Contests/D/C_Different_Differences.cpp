#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,k;
cin>>k>>n;
bool a[n];
forn(i,n){
    a[i]=0;
}
ll idx=0;
ll cnt=0;
ll diff=0;
while(idx<n && cnt<k){
    diff++;
    a[idx]=1;
    idx+=diff;
    cnt++;
}
if(cnt<k){
    ll indx=n-1;
    while(cnt<k && indx>=0){
        if(a[indx]==0){
            a[indx]=1;
            cnt++;
        }
        indx--;
    }
}
forn(i,n){
    if(a[i]){
        cout<<i+1<<" ";
    }
}
cout<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}