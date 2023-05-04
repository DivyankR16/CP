#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,m;
cin>>n>>m;
ll arr[n][m];
ll cycle=0;
forn(i,n){
    if(i%2==0){cycle++;}
    forn(j,m){
        if(cycle%2==1){
        if(i%2==0){
            if(j%4==0 || j%4==3){arr[i][j]=1;}
            else{arr[i][j]=0;}
        }
        else{
            if(j%4==1 || j%4==2){arr[i][j]=1;}
            else{arr[i][j]=0;}
        }
    }
    else{if(i%2==0){
            if(j%4==1 || j%4==2){arr[i][j]=1;}
            else{arr[i][j]=0;}
        }
        else{
            if(j%4==0 || j%4==3){arr[i][j]=1;}
            else{arr[i][j]=0;}
        }

    }
}
}
forn(i,n){
    forn(j,m){
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