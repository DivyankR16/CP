#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
//CASE-1
//forn(i,n){
//if(a[i]>a[i+1]){
//    if((a[i]+a[i+1])%2==1){
//        swap(a[i],a[i+1]);
//    }
//    else{
//        if(a[i]%2==0){
//           
//        }
//        else{
//            //dono odd
//        }
//    }
//}
//}
//CASE-2
ll prve=-1;
ll preo=-1;
forn(i,n){
    if(a[i]%2==0){
        if(prve<=a[i]){
            prve=a[i];
        }
        else{
            cout<<"No"<<endl;
            return;
        }
    }
    else{
        if(preo<=a[i]){
            preo=a[i];
        }
        else{
            cout<<"No"<<endl;
            return;
        }
    }
}
cout<<"Yes"<<endl;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}