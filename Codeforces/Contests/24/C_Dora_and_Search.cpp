#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
ll index[n];
forn(i,n){
    cin>>a[i];
}
forn(i,n){
    index[a[i]-1]=i;
}
ll max=n-1;
ll min=0;
ll l=0;
ll r=n-1;
bool check=true;
while(l<r){
    bool check=true;
    if(index[min]==l){
        l++;
        min++;
        check=false;
    }
    else if(index[min]==r){
        r--;
        min++;
        check=false;
    }
    if(index[max]==l){
        l++;
        max--;
        check=false;
    }
    else if(index[max]==r){
        r--;
        max--;
        check=false;
    }
    if(check){
        cout<<l+1<<" "<<r+1<<"\n";
        return;
    }
}
cout<<-1<<"\n";
}
signed main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}