#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void leftrotate(ll a[],ll m){
    
}
void solve(){
ll n,m;
cin>>n>>m;
if(m>n){
    ll arr[m];
    forn(i,m){
        arr[i]=i;
    }
    cout<<n+1<<"\n";
    ll cnt=0;
    forn(i,n){
        cnt++;
        forn(j,m){
            cout<<(arr[j]+cnt)%m<<" ";
        }
        cout<<"\n";
    }

}
else{
    if(m==1){
        cout<<0<<"\n";
        forn(i,n){
            cout<<0<<"\n";
        }
        return;
    }
    cout<<m<<"\n";
    ll val=m-1;
    ll arr[m];
    forn(i,m){
        arr[i]=i;
    }
    ll cnt=0;
    forn(i,val){
        forn(j,m){
            cout<<(arr[j]+cnt)%m<<" ";
        }
        cnt++;
        cout<<"\n";
    }
    ll left=n-val;
    ll looptime=0;
    if(left/val>0){
     looptime=left/val;
    }
    forn(k,looptime){
    cnt=0;
    forn(i,val){
        forn(j,m){
            cout<<(arr[j]+cnt)%m<<" ";
        }
        cnt++;
        cout<<"\n";
    }}
    ll more=left%val;
    cnt=0;
    forn(i,more){
        forn(j,m){
            cout<<(arr[j]+cnt)%m<<" ";
        }
        cnt++;
        cout<<"\n";
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