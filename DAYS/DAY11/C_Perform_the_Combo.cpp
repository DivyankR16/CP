#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,m;
cin>>n>>m;
string s;
cin>>s;
ll a[m];
forn(i,m)cin>>a[i];
ll dp[n][26];
forn(i,n){
    forn(j,26){
        dp[i][j]=0;
    }
}
dp[0][s[0]-'a']++;
for(ll i=1;i<n;i++){
    forn(j,26){
        if(j==s[i]-'a'){
          dp[i][j]=dp[i-1][j]+1;
        }
        else{
        dp[i][j]=dp[i-1][j];}
    }
}
ll freq[26];
memset(freq,0,sizeof(freq));
forn(i,m){
    forn(k,26){
        freq[k]+=dp[a[i]-1][k];
    }
}
forn(i,26){
freq[i]+=dp[n-1][i];}
forn(i,26){
    cout<<freq[i]<<" ";
}
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