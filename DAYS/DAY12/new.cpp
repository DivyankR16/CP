#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
int solve(){
    int A;
    cin>>A;
    string B,C;
    cin>>B>>C;
   int dp[A][26];
  for(int i=0;i<A;i++){
      for(int j=0;j<26;j++){
          dp[i][j]=-1;
      }
  }
  ll cnt=0;
  for(int i=A-1;i>0;i--){
      for(int j=0;j<26;j++){
          if(j==B[i]-'a'){
              dp[i-1][j]=i;
          }
          else{
              dp[i-1][j]=dp[i][j];
          }
      }
  }
  int ans=0;
  for(int i=0;i<A-1;i++){
    if(B[i]!=C[i]){
          if(dp[i+1][C[i]-'a']!=-1){
              ans+=(dp[i][C[i]-'a']-i);
          }
          else{
              ans++;
          }
    }
  }
  cout<<"\n";
  if(B[A-1]!=C[A-1])ans++;
  int mod=1e9+7;
  int val=(round(pow(2,ans))/ans);
  val=val%mod;
  return val; 
}
int main(){
cout<<solve()<<"\n";
return 0;
}