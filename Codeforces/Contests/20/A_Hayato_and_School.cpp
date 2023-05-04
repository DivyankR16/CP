#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n){
    cin>>a[i];
}
ll oc=0;
ll ec=0;
forn(i,n){
    if(a[i]%2==1)oc++;
    else ec++;
}
if(oc<1){
    cout<<"NO"<<"\n";
    return;
}
if(oc<=2 && ec<2){
    cout<<"NO"<<"\n";
    return;
}
else{
    cout<<"YES"<<"\n";
    if(oc>=3){
        ll cnt=0;
        forn(i,n){
            if(cnt>=3)break;
            if(a[i]%2==1){
                cout<<i+1<<" ";
                cnt++;
            }
        }
        cout<<"\n";
    }
    else{
        ll cnte=0;
        ll cnto=0;
        forn(i,n){
            if(a[i]%2==1 && !cnto){
                cout<<i+1<<" ";
                cnto++;
            }
            if(a[i]%2==0 && cnte<2){
                cout<<i+1<<" ";
                cnte++;
            }
        }
        cout<<"\n";
    }
}
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