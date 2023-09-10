#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,k;
cin>>n>>k;
if(n<k){
    cout<<"NO"<<"\n";
    return;
}
if(n%k==0){
    cout<<"YES"<<"\n";
    forn(i,k){
        cout<<n/k<<" ";
    }
    cout<<"\n";
}
else{
    if((n%k)%2==0){
        cout<<"YES"<<"\n";
        forn(i,k-1){
            cout<<n/k<<" ";
        }
        cout<<n/k+n%k<<" ";
        cout<<"\n";
    }
    else{
        if(n/k<=1){
            cout<<"NO"<<"\n";
        }
        else if((k-1)%2==0){
            cout<<"YES"<<"\n";
        forn(i,(k-1)/2){
            cout<<n/k+1<<" ";
        }
        forn(i,(k-1)/2){
            cout<<n/k-1<<" ";
        }
        cout<<n/k+n%k<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
}
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