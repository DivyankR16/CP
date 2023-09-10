#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
    ll MOD=1e9+7;
int mazeObstacles(int n, int m, vector< vector< int> > &mat) {
    vector<vector<int>>dp(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            dp[i][j]=mat[i][j];
        }
    }
    int idx1=-1;
    for(int i=0;i<n;i++){
        if(dp[i][0]==-1){
              idx1=i;
              break;
        }
    }
    for(int i=0;i<n;i++){
        dp[i][0]=1;
    }
    if(idx1!=-1){
        for(int i=idx1;i<n;i++){
             dp[i][0]=-1;
        }
    }
    int idx2=-1;
    for(int i=0;i<m;i++){
        if(dp[0][i]==-1){
            idx2=i;
            break;
        }
    }
    for(int i=0;i<m;i++){
        dp[0][i]=1;
    }
    if(idx2!=-1){
        for(int i=idx2;i<m;i++){
            dp[0][i]=-1;
        }
    }
    for(int i=1;i<n;i++){
        for(int j=1;i<m;j++){
            if(dp[i-1][j]==-1 && dp[i][j-1]==-1){
                dp[i][j]=-1;
            }
            else{
            //    dp[i][j]=((dp[i-1][j]>0?dp[i-1][j]:0)+(dp[i][j-1]>0?dp[i][j-1]:0))%MOD;
               if(dp[i-1][j]==-1){
                   dp[i][j]=dp[i][j-1]%MOD;
               }
               else if(dp[i][j-1]==-1){
                   dp[i][j]=dp[i-1][j]%MOD;
               }
               else{
                   dp[i][j]=(dp[i-1][j]%MOD+dp[i][j-1]%MOD)%MOD;
               }
            }
        }
    }
    if(dp[n-1][m-1]==-1){
        return 0;
    }
    else{
        return dp[n-1][m-1];
    }
}
int main(){
ll n,m;
cin>>n>>m;
vector<vector<int>>mat;
for(int i=0;i<n;i++){
    vector<int>nn;
    for(int j=0;j<m;j++){
        ll x;
        cin>>x;
         nn.push_back(x);
    }
    mat.push_back(nn);
}
cout<<mazeObstacles(n,m,mat)<<"\n";
return 0;
}