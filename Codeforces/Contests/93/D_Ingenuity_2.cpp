#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    if(n==2){
        if(s[0]!=s[1]){
            cout << "NO" << "\n";
        }
        else{
            cout << "RH" << "\n";
        }
        return;
    }
    map<char, ll> mp;
    for(auto i:s){
        mp[i]++;
    }
    if((mp['N']+mp['S'])%2==1){
        cout << "NO" << "\n";
        return;
    }
    if ((mp['E'] + mp['W']) % 2 == 1)
    {
        cout << "NO" << "\n";
        return;
    }
    map<char, ll> R; 
    map<char, ll> H; 
    for(auto i:s){
        if(R[i]>H[i]){
            H[i]++;
        }
        else{
            
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