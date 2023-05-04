#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
if(n%2==1){
    cout<<-1<<endl;
}
else{
    ll count=0;
    forn(i,n-1){
        if(a[i]*a[i+1]>0){
            count++;
            i++;
        }
        else{
            count+=2;
            i++;
        }
    }
    cout<<count<<endl;
    forn(i,n-1){
        if(a[i]*a[i+1]>0){
            cout<<i+1<<" "<<i+2<<endl;
            i++;
        }
        else{
            cout<<i+1<<" "<<i+1<<endl;
            cout<<i+2<<" "<<i+2<<endl;
            i++;
        }
    }
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