#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,m,k;
cin>>n>>m>>k;
if(k>3){
   cout<<0<<"\n";
}
else{
    if(k==1){
        cout<<1<<"\n";
    }
    else if(k==3){
        if(m>n){
            cout<<m-n-(m/n-1)<<"\n";
        }
        else{
            cout << 0 << "\n";
        }
    }
    else{
        cout<<min(n,m)+(m/n?m/n-1:0)<<"\n";
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