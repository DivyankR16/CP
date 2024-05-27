#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
ll check(ll n){
    ll cnt = 0;
    string need = "";
    while(cnt<2){
        if(n%2==0){
            need += '0';
        }
        else{
            need += '1';
        }
        n /= 2;
        cnt++;
    }
    reverse(need.begin(), need.end());
    if(need=="00"){
        return 0;
    }
    else if(need=="01"){
        return 1;
    }
    else if (need == "10")
    {
        return 2;
    }
    else{
        return 3;
    }
}
void solve(){
    ll x;
    cin >> x;
    ll val = x;
    vector<ll> ans;
    while(val){
        if(val%2!=0 && check(val)==1){
            val -= 1;
            val /= 2;
            ans.push_back(1);
        }
        else if(val%2!=0){
            val += 1;
            val /= 2;
            ans.push_back(-1);
        }
        else{
            val /= 2;
            ans.push_back(0);
        }
    }
    cout << ans.size() << "\n";
    for(auto i:ans){
        cout << i << " ";
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