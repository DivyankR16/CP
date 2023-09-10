#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll a,b,c;
cin>>a>>b>>c;
if(c%2==1){
    if(a>=b){
        cout<<"First"<<"\n";
    }
    else{
        cout<<"Second"<<"\n";
    }
}
else{
    if(b>=a){
        cout<<"Second"<<"\n";
    }
    else{
        cout<<"First"<<"\n";
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