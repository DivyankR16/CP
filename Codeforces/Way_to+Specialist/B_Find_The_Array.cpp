#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
ll sum=0;
forn(i,n){cin>>a[i];
  sum+=a[i];}
ll sumOdd=0;
ll sumEven=0;
bool check=true;
forn(i,n){
    if(check){
        sumOdd+=a[i];
        check=!check;
    }
    else{
        sumEven+=a[i];
        check=!check;
    }
}
if(sumOdd<=(sum/2)){
    bool need=true;
   forn(i,n){
        if(need){
            cout<<1<<" ";
            need=!need;
        }
        else{
            cout<<a[i]<<" ";
            need=!need;
        }
   }
   cout<<"\n";
}
else{
     bool need=false;
   forn(i,n){
        if(need){
            cout<<1<<" ";
            need=!need;
        }
        else{
            cout<<a[i]<<" ";
            need=!need;
        }
   }
   cout<<"\n";
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