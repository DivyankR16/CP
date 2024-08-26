#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll a,b,c;
    cin>>a>>b>>c;
    if(b<=c){
        if(a>=b && a<=c){
            cout << "No" << "\n";
        }
        else{
            cout << "Yes" << "\n";
        }
    }
    else{
        if(a>=c && a<=b){
            cout << "Yes" << "\n";
        }
        else{
            cout << "No" << "\n";
        }
    }
}
int main(){
ios_base:: sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
solve();
return 0;
}