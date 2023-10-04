#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
vector<vector<ll>>memo;
ll fill(ll n,ll currindex,bool previous_one){
    if(currindex==n)return 1;
    if(memo[currindex][previous_one]!=-1)return memo[currindex][previous_one];
    ll ans=0;
    ans+=fill(n,currindex+1,false);
    if(previous_one==false){
       ans+=fill(n,currindex+1,true);
    }
    return memo[currindex][previous_one]=ans;
}
int main(){
ll n;
cin>>n;
memo.resize(n,vector<ll>(2,-1));
cout<<fill(n,0,false)<<"\n";
return 0;
}