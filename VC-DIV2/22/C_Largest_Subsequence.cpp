#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector<pair<char, ll>> v;
    char largest = 'A';
    for (ll i = n - 1; i >= 0;i--){
         if(s[i]>largest){
             v.push_back({s[i], i});
             largest = s[i];
         }
         else if(s[i]==largest){
             v.push_back({largest, i});
         }
    }
    reverse(v.begin(), v.end());
    bool isSorted = true;
    forn(i,n-1){
        if(s[i]>s[i+1]){
            isSorted = false;
            break;
        }
    }
    vector<char> temp;
    forn(i,v.size()){
        temp.push_back(v[i].first);
    }
    sort(temp.begin(), temp.end());
    forn(i,v.size()){
        v[i].first = temp[i];
    }
    if(isSorted){
        cout << 0 << "\n";
        return;
    }
    ll refv = 0;
    forn(i,n){
      if(refv<v.size() && i==v[refv].second){
          s[i] = v[refv].first;
          refv++;
      }
    }
    bool isSortedAfterOperations = true;
    forn(i,n-1){
        if(s[i]>s[i+1]){
            isSortedAfterOperations = false;
            break;
        }
    }
    if(isSortedAfterOperations){
        ll sz = v.size()-2;
            while(sz>=0 && temp[sz]==temp[sz+1]){
                sz--;
            }
            cout << sz + 1 << "\n";
    }
    else{
        cout << -1 << "\n";
    }
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}