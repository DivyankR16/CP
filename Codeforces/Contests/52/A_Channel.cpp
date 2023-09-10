#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,a,q;
cin>>n>>a>>q;
string s;
cin>>s;
ll min_on=0;
ll max_on=a;
ll cur_on=a;
forn(i,n){
    if(s[i]=='+'){
        cur_on++;
    }
    else{
        cur_on--;
    }
    max_on=max(max_on,cur_on);
    min_on=min(min_on,cur_on);
}
if(n >= min_on && n < max_on){
        cout<<"MAYBE"<<"\n";
}
else if(n<min_on){
    cout<<"NO"<<"\n";
}
else{
    cout<<"YES"<<"\n";
}
    // elif a > max_online or a < min_online:
    //     print("NO")
    // else:
    //     print("YES")
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}