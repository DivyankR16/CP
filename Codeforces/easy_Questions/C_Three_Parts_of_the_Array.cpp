#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll d[n];
forn(i,n)cin>>d[i];
ll S=0;
ll l=0;
ll r=n-1;
ll suml=d[0];
ll sumr=d[n-1];
while(l<r){
    if(suml>sumr){
        r--;
        sumr+=d[r];
    }
    else if(suml<sumr){
        l++;
        suml+=d[l];
    }
    else{
        S=max(S,suml);
        l++;
        r--;
        if(l<r){
        suml+=d[l];
        sumr+=d[r];}
    }
}
cout<<S<<endl;
}
int main(){
solve();
return 0;
}