#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
string s;
cin>>s;
ll n=s.size();
vector<pair<ll,ll>>v;
bool ans=true;
ll idxuptoSorted=-1;
forn(i,n){
    if(s[i]=='+'){
        if(v.size()==0){
            v.push_back({1,i});
        }
        else{
            v.push_back({v.back().first,i});
        }
    }
    else if(s[i]=='-'){
        v.pop_back();
    }
    else{
        if(s[i]=='1'){
            if(v.size()>1 && v.back().first==-1){
               ans=false;
               break;
            }
            else if(v.size()==1){
                v[0].first=1;
            }
            idxuptoSorted=i;
        }
        else{
            if(v.size()<=1){
               ans=false;
               break;
            }
            if(v.back().first!=-1){
            if(v.back().second>idxuptoSorted){
                  v.back().first=-1;
            }
            else{
                ans=false;
                break;
            }
            }
        }
    }
}
if(ans){
    cout<<"YES"<<"\n";
}
else{
    cout<<"NO"<<"\n";
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