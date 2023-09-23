#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
bool isprime=true;
for(ll i=2;i*i<=n;i++){
    if(n%i==0){
        isprime=false;
        break;
    }
}
if(n%2==0){
    cout<<3*n<<" "<<2*n<<"\n";
}
else{ 
    if(n==1){
        cout<<10<<" "<<9<<"\n";
    }
    else{
    cout<<8*n<<" "<<7*n<<"\n";}
}
}
int main(){
solve();
return 0;
}