#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    string check = "2020";
    for (ll i = 0; i <=4;i++){
        if(i==0){
            if(s.substr(n-i-1,n-i)==check.substr(0,n-i)){
                cout << "YES"
                     << "\n";
                return;
            }
        }
        if(i==n){
            if(s.substr(0,i)==check.substr(0,i)){
                cout << "YES"
                     << "\n";
            }
        }
        else{
            if(s.substr(0,i)==check.substr(0,i) && s.substr(n-(4-i))==check.substr(i)){
                cout << "YES"
                     << "\n";
                return;
            }
        }
    }
    cout << "NO"
         << "\n";
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