#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,k,x;
cin>>n>>k>>x;
if(x!=1){
    cout<<"YES"<<"\n";
    cout<<n<<"\n";
    forn(i,n){
        cout<<1<<" ";
    }
    cout<<"\n";
}
else{
    if(x==k){
        cout<<"NO"<<"\n";
        return;
    }
    if(k<=2){
        if(n%2==1){
            cout<<"NO"<<"\n";
        }
        else{
            cout<<"YES"<<"\n";
            cout<<n/2<<"\n";
            forn(i,n/2){
                cout<<2<<" ";
            }
            cout<<"\n";
        }
    }
    else{
        if(n%2==0){
            cout<<"YES"<<"\n";
            cout<<n/2<<"\n";
            forn(i,n/2){
                cout<<2<<" ";
            }
            cout<<"\n";
        }
        else{
            cout<<"YES"<<"\n";
            cout<<n/2<<"\n";
            forn(i,n/2-1){
                cout<<2<<" ";
            }
            cout<<3<<" ";
            cout<<"\n";
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