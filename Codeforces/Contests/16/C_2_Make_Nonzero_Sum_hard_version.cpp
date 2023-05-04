#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
forn(i,n-1){
    if(a[i]*a[i+1]>0){
        cout<<i+1<<" "<<i+2<<"\n";
        i++;
    }
    else if(a[i]*a[i+1]<0){
        cout<<i+1<<" "<<i+1<<"\n";
        cout<<i+2<<" "<<i+2<<"\n";
        i++;
    }
    else{ll cnt=0;
        if(a[i]==0){
         while(a[i]==0)
         {cnt++;
         i++;}
         cout<<i-cnt+1<<" "<<i-1+1<<"\n";
         i--;
        }
        else if(a[i]==1){
            i++;
            while(a[i]==0){cnt++;
            i++;}
            if(cnt%2==1){
                if(a[i])
            }
        }
    }
}
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}