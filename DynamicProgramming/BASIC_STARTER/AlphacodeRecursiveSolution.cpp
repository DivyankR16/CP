#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
vector<ll> memo;
ll ans(string &s,ll i){
    if(i==s.size()){
        return 1;
    }
    if(memo[i]!=-1){
        return memo[i];
    }
    ll sum = 0;
    if(s[i]>='1' && s[i]<='9'){
        sum += ans(s, i + 1);
    }
    if(i+1<s.size() && s[i]=='1'){
        sum += ans(s, i + 2);
    }
    if(i+1<s.size() && s[i]=='2' && s[i]<='6'){
        sum += ans(s, i + 2);
    }
    return memo[i]=sum;
}
ll solve(){
    string s;
    cin >> s;
    if(s=="0")return 0;
    else{
        memo.clear();
        memo.resize(s.size(), -1);
        cout << ans(s, 0) << "\n";
        return 1;
    }
}
int main(){
    while(true){
if(!solve()){
           break;
}
    }
return 0;
}