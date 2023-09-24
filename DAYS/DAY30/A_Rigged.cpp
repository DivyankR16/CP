#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    //Always take full input and then Solve
ll n;
cin>>n;
ll s[n];
ll e[n];
ll needs=-1;
ll neede=-1;
forn(i,n){
    cin>>s[i]>>e[i];
}
forn(i,n){
      if(!i){
        needs=s[i];
        neede=e[i];
    }
    else{
        if(e[i]>=neede && s[i]>=needs){
            cout<<-1<<"\n";
                return;
        }
    }
}
cout<<needs<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}