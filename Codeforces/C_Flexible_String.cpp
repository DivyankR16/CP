#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
ll val;
void subsetK(string a,string b,ll n,ll k,vector<char>&arr,vector<ll>&mark,ll counter){
          if(counter==k){
            ll consePair=0;
            ll totalPair=0;
            forn(i,a.size()){
                if(a[i]==b[i] || mark[a[i]-'a']){
                    consePair++;
                }
                else{
                    totalPair+=consePair*(consePair+1)/2;
                    consePair=0;
                }
            }
            totalPair+=consePair*(consePair+1)/2;
            val=max(val,totalPair);
            return;
        }
      if(n==0)return;
      mark[arr[n-1]-'a']=1;
      subsetK(a,b,n-1,k,arr,mark,counter+1);
      mark[arr[n-1]-'a']=0;
      subsetK(a,b,n-1,k,arr,mark,counter);
}
void solve(){
ll n,k;
cin>>n>>k;
string a,b;
cin>>a;
cin>>b;
ll u;
set<char>s;
forn(i,n){
    s.insert(a[i]);
}
u=min(k,(ll)s.size());
vector<char>incl;
for(auto i:s){
    incl.push_back(i);
}
n=incl.size();
vector<ll>mark(26,0);
ll counter=0;
subsetK(a,b,n,u,incl,mark,counter);
cout<<val<<"\n";
}
signed main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);
ll t;
cin>>t;
while(t--){
solve();
val=0;
};
return 0;
}