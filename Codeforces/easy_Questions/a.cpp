#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(int i=0;i<n;i++)
void solve(){
int n;
cin>>n;
int arr[n][n];
for (int i = 0; i < 2*n-1; i++)
{for (int j = 0; j < 2*n-1; j++)
{  arr[i][j]=n;}}
int ans[n][n];
for (int i = 0; i < 2*n-1; i++)
{for (int j = 0; j < 2*n-1; j++)
{if(i<=n || j<=n){
    ans[i][j]=min(i,j);}
    else{
        ans[i][j]=min(2*n-2-i,2*n-2-j);
    }
}
}
forn(i,2*n-1){
    forn(j,2*n-1){
       arr[i][j]-=ans[i][j];
    }
}
forn(i,2*n-1){
    forn(j,2*n-1){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}