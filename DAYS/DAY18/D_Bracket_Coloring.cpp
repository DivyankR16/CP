#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
string s;
cin>>s;
ll cnt1=0;
ll cnt2=0;
forn(i,n){
    if(s[i]=='(')cnt1++;
    else cnt2++;
}
if(cnt1!=cnt2){
    cout<<-1<<"\n";
    return;
}
bool isregular=true;
ll p=0;
ll a=0;
ll regclr=1;
ll revclr=2;
bool isusedreg=false;
bool isusedrev=false;
vector<ll>ans(n);
if(s[0]=='('){
    p++;
    ans[0]=regclr;
    revclr=2;
    isusedreg=true;
}
else{
    a++;
    ans[0]=revclr;
    isregular=false;
    isusedrev=true;
}
for(ll i=1;i<n;i++){
    if(isregular){
        if(s[i]=='('){
           p++;
           ans[i]=regclr;
           isusedreg=true;
        }
        else{
            if(p==a){
                ans[i]=revclr;
                isusedrev=true;
                a++;
                isregular=!isregular;
            }
            else{
               a++;
               ans[i]=regclr;
               isusedreg=true;
            }
        }
    }
    else{
        if(s[i]==')'){
            a++;
            ans[i]=revclr;
            isusedrev=true;
        }
        else{
            if(a==p){
                ans[i]=regclr;
                p++;
                isregular=!isregular;
                isusedreg=true;
            }
            else{
                p++;
                ans[i]=revclr;
                isusedrev=true;
            }
        }
    }
}
if(isusedreg && isusedrev){
    cout<<2<<"\n";
    for(auto i:ans){
    cout<<i<<" ";
}
}
else{
    cout<<1<<"\n";
for(auto i:ans){
    cout<<1<<" ";
}}
cout<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}