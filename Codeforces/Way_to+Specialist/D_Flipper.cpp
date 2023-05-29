#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll p[n];
forn(i,n)cin>>p[i];
ll maxValIndx=-1;
forn(i,n){
    if(p[i]==n){maxValIndx=i;
    break;}
}
vector<ll>ans;
if(maxValIndx!=0 && maxValIndx!=n-1){
for(ll i=maxValIndx;i<n;i++){
    ans.push_back(p[i]);
}
ans.push_back(p[maxValIndx-1]);
    ll i1=0;
    ll i2=maxValIndx-2;
    while(i1<i2){
        if(p[i2]>p[i1]){
            ans.push_back(p[i2]);
            i2--;
        }
        else{
            for(ll j=i1;j<=i2;j++){
                ans.push_back(p[j]);
            }
            break;
        }
    }
    if(i1==i2){
        ans.push_back(p[i1]);
    }
    if(i2==-1){
        ans.push_back(p[i1]);
    }
}
else if(maxValIndx==n-1){
    for(ll i=maxValIndx;i<n;i++){
    ans.push_back(p[i]);
}
    ll i1=0;
    ll i2=maxValIndx-1;
    while(i1<i2){
        if(p[i2]>p[i1]){
            ans.push_back(p[i2]);
            i2--;
        }
        else{
            for(ll j=i1;j<=i2;j++){
                ans.push_back(p[j]);
            }
            break;
        }
    }
    if(i1==i2){
        ans.push_back(p[i1]);
    }
    if(i2==-1){
        ans.push_back(p[i1]);
    }
}
else{
    ll max2ValIndx=-1;
    forn(i,n){
    if(p[i]==n-1){max2ValIndx=i;
    break;}
}
if(max2ValIndx!=n-1){
for(ll i=max2ValIndx;i<n;i++){
    ans.push_back(p[i]);
}
ans.push_back(p[max2ValIndx-1]);
    ll i1=0;
    ll i2=max2ValIndx-2;
    while(i1<i2){
        if(p[i2]>p[i1]){
            ans.push_back(p[i2]);
            i2--;
        }
        else{
            for(ll j=i1;j<=i2;j++){
                ans.push_back(p[j]);
            }
            break;
        }
    }
    if(i1==i2){
        ans.push_back(p[i1]);
    }
    if(i2==-1){
        ans.push_back(p[i1]);
    }
}
else{
    for(ll i=max2ValIndx;i<n;i++){
    ans.push_back(p[i]);
}
    ll i1=0;
    ll i2=max2ValIndx-1;
    while(i1<i2){
        if(p[i2]>p[i1]){
            ans.push_back(p[i2]);
            i2--;
        }
        else{
            for(ll j=i1;j<=i2;j++){
                ans.push_back(p[j]);
            }
            break;
        }
    }
    if(i1==i2){
        ans.push_back(p[i1]);
    }
    if(i2==-1){
        ans.push_back(p[i1]);
    }
}
}
forn(i,n){
    cout<<ans[i]<<" ";
}
cout<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}