#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
bool flag=true;
forn(i,n){
if(a[i]==1){
    flag=false;
    break;
}
}
if(flag){
    cout<<"YES"<<endl;
}
else{
    sort(a,a+n);
        if(a[0]==0){
            cout<<"NO"<<endl;
            return;
        }
        for (ll i = n-1; i >= 1; i--)
        {
            if(a[i]-a[i-1]==1){
                cout<<"NO"<<endl;
                return;
            }
        }
        cout<<"YES"<<endl;
        
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