#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
string s;
cin>>s;
ll nonmatchingseg=0;
bool val;
bool startwithmatch=true;
if(s[0]==s[n-1])val=1;
else {val=0;
startwithmatch=false;}
ll br=0;
for(ll i=1;i<n/2;i++){
    if(s[i]==s[n-1-i]){
        if(!val){br++;
        val=1;}
    }
    else{
        if(val){
            br++;
            val=0;
        }
    }
}
if(startwithmatch){
    if(br>2){
        cout<<"No"<<"\n";
    }
    else{
        cout<<"Yes"<<"\n";
    }
}
else{
    if(br>1){
        cout<<"No"<<"\n";
    }
    else{
        cout<<"Yes"<<"\n";
    }
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