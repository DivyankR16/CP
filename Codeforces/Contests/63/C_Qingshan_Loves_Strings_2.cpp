#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    if(n%2==1){
        cout << -1 << "\n";
        return;
    }
    vector<ll> ans;
    ll i = 0;
    ll j = s.size()-1;
    while(i<j && ans.size()<=300){
        if(s[i]==s[j]){
             if(s[i]=='0'){
                 s.insert(j + 1, "01");
                //  cout << s << "\n";
                 ans.push_back(j);
                 j += 2;
                 j--;
                 i++;
             }
             else{
                 s.insert(i, "01");
                 ans.push_back(i-1);
                 i++;
                 j += 1;
             }
        }
        else{
             i++;
             j--;
        }
    }
    if(ans.size()>300){
        cout <<-1
             << "\n";
    }
    else{
        cout << ans.size() << "\n";
        for(auto i:ans){
             cout << i+1<< " ";
        }
        cout << "\n";
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