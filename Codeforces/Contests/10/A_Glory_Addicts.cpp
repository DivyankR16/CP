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
ll b[n];
ll mE=INT_MAX;
forn(i,n){
    cin>>b[i];
    mE=min(mE,b[i]);
}
ll ans=0;
bool flag=true;
vector<ll>a0;
vector<ll>a1;
forn(i,n){
    if(b[i]==mE){
        ans+=mE;
       if(!a[i]){
        flag=false;
       }
    }
    else{
    if(a[i]==0){
        a0.push_back(b[i]);
    }
    else{
        a1.push_back(b[i]);
    }}
}
ll i=a0.size()-1;
ll j=a1.size()-1;
sort(a0.begin(),a0.end());
sort(a1.begin(),a1.end());
bool dir=true;
while(i>=0 && j>=0){
    if(flag){
        if(dir){
      ans+=2*(a0[i]);
      i--;}
      else{ans+=2*(a1[j]);
      j--;}
      dir=!dir;
    }
    else{
        if(dir){
      ans+=2*(a1[j]);
      j--;}
      else{ans+=2*(a0[i]);
      i--;}
      dir=!dir;
    }
}
if(flag){
    if(i>=0){
        ans+=2*a0[i];
        i--;
    }
}
else if(!flag){
    if(j>=0){
        ans+=2*a1[j];
        j--;
    }
}
while(i>=0){
    ans+=a0[i];
    i--;
}
while(j>=0){
    ans+=a1[j];
    j--;
}
cout<<ans<<endl;
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}