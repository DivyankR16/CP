#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n],b[n];
bool check=true;
forn(i,n){
    cin>>a[i];
    if(i){
        if(a[i]<a[i-1]){
            check=false;
        }
    }
}
bool check0=false;
bool check1=false;
forn(i,n){
   cin>>b[i];
   if(b[i]==0){
    check0=true;
   }
   else{
    check1=true;
   }
}
if(check0 && check1){
    cout<<"Yes"<<"\n";
}
else{
    if(check){
        cout<<"Yes"<<"\n";
    }
    else{
        cout<<"No"<<"\n";
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