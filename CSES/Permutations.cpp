#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
if(n<=3){
    cout<<"NO"<<"\n";
    return;
}
if(n%2==0){
    ll f=1;
    ll l=n;
    bool trans=true;
    ll ffc=f;
    ll lfc=l;
    bool trans=true;
    while(f<l){

    }
}
else{
    ll f=1;
    ll l=n;
    bool trans=true;
    while(f<l){
        if(trans){
            cout<<f<<" "<<l<<" ";
        }
        else{
            cout<<l<<" "<<f<<" ";
        }
        f++;
        l--;
        trans=!trans;
    }
}
}
int main(){
solve();

return 0;
}