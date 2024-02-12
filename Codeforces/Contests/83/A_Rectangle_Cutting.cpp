#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll a, b;
    cin >> a >> b;
    if(a%2==1 && b%2==1){
        cout << "No"
             << "\n";
    }
    else{
        ll na = min(a, b);
        ll nb = max(a, b);
        if(na%2==1 && (nb/2)==na){
            cout << "No"
                 << "\n";
        }
        else{
            cout << "Yes"
                 << "\n";
        }
    }
}
int main(){
ios_base:: sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}