#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
//L**d Question itna bda code deta hai b**c**d
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
bool isallneg=true;
bool isallpos=true;
forn(i,n){
    isallneg&=(a[i]<=0);
    isallpos&=(a[i]>=0);
}
if(isallneg){
    cout<<n-1<<"\n";
    for(ll i=n-1;i>=1;i--){
        cout<<i<<" "<<i+1<<"\n";
    }
    return;
}
if(isallpos){
    cout<<n-1<<"\n";
    forn(i,n-1){
        cout<<i+2<<" "<<i+1<<"\n";
    }
    return;
}
ll x1=0;
ll x2=0;
ll y1=0;
ll y2=0;
ll maxval=INT_MIN;
ll minval=INT_MAX;
ll maxidx=-1;
ll minidx=-1;
forn(i,n){
    if(a[i]>=0)x2++;
    if(a[i]<0)y2++;
    if(a[i]>maxval){
        maxval=a[i];
        maxidx=i;
    }
    if(a[i]<minval){
        minval=a[i];
        minidx=i;
    }
}
if(abs(maxval)>=abs(minval)){
    x1=0;
    y1=5;
    if(x1+x2<=y1+y2){
      vector<pair<ll,ll>>ans;
      forn(i,n){
        if(a[i]<0){
            a[i]+=maxval;
            ans.push_back({i,maxidx});
        }
      }
      forn(i,n-1){
        ans.push_back({i+1,i});
      }
      cout<<ans.size()<<"\n";
      forn(i,ans.size()){
        cout<<ans[i].first+1<<" "<<ans[i].second+1<<"\n";
      }
    }
    else{
        vector<pair<ll,ll>>ans;
        forn(i,5){
            a[minidx]+=a[minidx];
            ans.push_back({minidx,minidx});
        }
        forn(i,n){
            if(a[i]>0){
                a[i]+=a[minidx];
                ans.push_back({i,minidx});
            }
        }
        for(ll i=n-1;i>=1;i--){
            a[i-1]+=a[i];
            ans.push_back({i-1,i});
        }
        cout<<ans.size()<<"\n";
      forn(i,ans.size()){
        cout<<ans[i].first+1<<" "<<ans[i].second+1<<"\n";
      }
    }
}
else{
    y1=0;
    x1=5;
    if(x1+x2<=y1+y2){
        vector<pair<ll,ll>>ans;
        forn(i,5){
            a[maxidx]+=a[maxidx];
            ans.push_back({maxidx,maxidx});
        }
        forn(i,n){
            if(a[i]>0){
                a[i]+=a[maxidx];
                ans.push_back({i,maxidx});
            }
        }
        forn(i,n-1){
            a[i+1]+=a[i];
            ans.push_back({i+1,i});
        }
        cout<<ans.size()<<"\n";
      forn(i,ans.size()){
        cout<<ans[i].first+1<<" "<<ans[i].second+1<<"\n";
      }
    }
    else{
        vector<pair<ll,ll>>ans;
        forn(i,n){
            if(a[i]>0){
                a[i]+=a[minidx];
                ans.push_back({i,minidx});
            }
        }
        for(ll i=n-1;i>=1;i--){
            a[i-1]+=a[i];
            ans.push_back({i-1,i});
        }
        cout<<ans.size()<<"\n";
      forn(i,ans.size()){
        cout<<ans[i].first+1<<" "<<ans[i].second+1<<"\n";
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