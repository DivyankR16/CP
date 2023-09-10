#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
int main() {
     ll n;
     cin>>n;
     unordered_map<string,ll>mp;
     forn(i,n){
       string s;
       cin>>s;
       mp[s]++;
     }
     vector<string>v;
     for(auto i:mp){
       if(i.second<=1){
         v.push_back(i.first);
       }
     }
     ll k;
     cin>>k;
     for(auto i:v){
        cout<<i<<" ";
     }
    //  if(v.size()<k){
    //    cout<<" "<<"\n";
    //  }
    //  else{
    //    ll cnt=0;
    //    for(auto i:v){
    //        cnt++;
    //        if(cnt==k){
    //          cout<<i<<"\n";
    //          break;
    //        }
    //    }
    //  }
    return 0;
}