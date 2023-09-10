#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
string s;
cin>>s;
ll n=s.size();
bool ans=true;
bool prev_plus_idx=-1;
ll prev_vector_size=0;
bool popneedsuccessful=false;
ll state=-1;
vector<ll>v;
forn(i,n){
    if(s[i]=='+'){
        v.push_back(1);
    }
    else if(s[i]=='-'){
        v.pop_back(); 
        if(prev_plus_idx-1==v.size()){
            popneedsuccessful=true;
        }
    }
    else{
        if(s[i]=='1'){
            if(state!=-1){
                if(state==0){
            if(v.size()!=1 && !v.empty()){
                  if(!popneedsuccessful){
                    ans=false;
                    break;
                  }
            }
            popneedsuccessful=false;
            }}
            prev_vector_size=v.size();
            state=1;
        }
        else{
            if(state!=-1){
            if(state==1){
            if(v.size()==1 || v.empty()){
                ans=false;
                break;
            }
            else{
                if(v.size()>prev_vector_size){
                    prev_plus_idx=v.size();
                }
                else{
                    if(s[i-1]=='-'){
                        ans=false;
                        break;
                    }
                    else{
                        prev_plus_idx=v.size();
                    }
                }
            }
            }
            }
            else{
                if(v.size()==1 || v.empty()){
                ans=false;
                break;
            } 
             prev_plus_idx=v.size();
            }
        prev_vector_size=v.size();
        state=0;
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