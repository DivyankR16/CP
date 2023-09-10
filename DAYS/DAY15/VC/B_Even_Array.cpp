#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
ll badodd=0;
ll badeven=0;
forn(i,n){
    if(i%2){
        if(a[i]%2==0)badodd++;
    }
    else{
        if(a[i]%2==1)badeven++;
    }
}
if(badodd!=badeven){
    cout<<-1<<"\n";
}
else{
    cout<<badodd<<"\n";
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