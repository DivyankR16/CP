#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll l,r;
cin>>l>>r;
if(r==1 || r==2 || r==3){
    cout<<-1<<"\n";
    return;
}
    if(l!=r){
        if(l%2==0 && l!=2){
            cout<<l/2<<" "<<l/2<<"\n";
        }
        else if(r%2==0){
            cout<<r/2<<" "<<r/2<<"\n";
        }
        else{
            cout<<(r-1)/2<<" "<<(r-1)/2<<"\n";
        }
    }
    else{
        if(l%2==0){
            cout<<l/2<<" "<<l/2<<"\n";
        }
        else{
           ll n=l;
           for(ll i=2;i<=sqrt(n);i++){
            if(n%i==0){
                cout<<i<<" "<<n-i<<" ";
                return;
            }
           }
           cout<<-1<<"\n";
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