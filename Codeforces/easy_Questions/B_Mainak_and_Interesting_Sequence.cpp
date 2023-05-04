#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,m;
cin>>n>>m;
if(m<n){
    cout<<"No"<<endl;
}
else if(m%n==0){
    cout<<"Yes"<<endl;
    forn(i,n){
        cout<<m/n<<" ";
    }
    cout<<endl;
}
else{
    if(n%2==1){
        cout<<"Yes"<<endl;
        forn(i,n-1){
            cout<<m/n<<" ";
        }
        cout<<m/n+m%n<<endl;
    }
    else{
        if(m%2==1){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
            forn(i,n-2){
                cout<<m/n<<endl;
            }
            cout<<((m%n)+2*(m/n))/2<<" "<<((m%n)+2*(m/n))/2<<" ";
            cout<<endl;
        }
    }
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