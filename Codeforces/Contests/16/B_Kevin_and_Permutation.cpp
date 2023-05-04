#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
bool dir=true;
ll i=1;
ll j=n/2+1;
while(j<=n || i<=n/2){
    if(dir){
        cout<<j<<" ";
        j++;
    }
    else{
        cout<<i<<" ";
        i++;
    }
    dir=!dir;
}
cout<<endl;
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}