#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
if(n%2==0){
    cout<<-1<<"\n";
    return;
}
vector<ll>moves;
ll cnt=0;
while(n>=2 && cnt<40){
    if((n/2)%2==0){
        n=n/2+1;
        moves.push_back(1);
    }
    else{
        n=n/2;
        moves.push_back(2);
    }
    cnt++;
}
if(n==1){
    cout<<moves.size()<<"\n";
    forn(i,moves.size()){
        cout<<moves[moves.size()-1-i]<<" ";
    }
    cout<<"\n";
}
else{
    cout<<-1<<"\n";
}
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