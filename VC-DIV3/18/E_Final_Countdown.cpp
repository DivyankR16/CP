#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll sm = 0;
    for (ll i = 0; i < n;i++){
        sm += (s[i] - '0');
    }
    vector<ll> ans;
    ll carry = 0;
    for (ll i = n - 1; i >= 0;i--){
        if(i==n-1){
            ans.push_back((carry+sm) % 10);
            carry = (carry + sm) / 10;
        }
        else{
            sm -= (s[i + 1] - '0');
            ans.push_back((carry + sm) % 10);
            carry = (carry + sm) / 10;
        }
    }
    while(carry>0){
        ans.push_back(carry % 10);
        carry /= 10;
    }
    while(ans.back()==0){
        ans.pop_back();
    }
    reverse(ans.begin(), ans.end());
    for(auto i:ans){
        cout << i;
    }
    cout << "\n";
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