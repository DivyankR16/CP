#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
string s;
cin>>s;
string ns="1";
string nl="1";
bool largeFound=false;
for(ll i=1;i<n;i++){
    if(!largeFound){
       if(s[i]=='2'){
        ns+='1';
        nl+='1';
       }
       else if(s[i]=='1'){
        ns+='0';
        nl+='1';
        largeFound=true;
       }
       else{
        ns+='0';
        nl+='0';
       }
    }
    else{
        if(s[i]=='0'){
            ns+='0';
            nl+='0';
        }
        else if(s[i]=='1'){
            ns+='1';
            nl+='0';
        }
        else{
            ns+='2';
            nl+='0';
        }
    }
}
cout<<nl<<"\n";
cout<<ns<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}