#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
string intToDigit(ll n){
    string ans = "";
    while(n){
        ll rem = n % 10;
        ans += (rem + '0');
        n /= 10;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
void solve(){
    ll a, s;
    cin >> a >> s;
    string d1 = intToDigit(a);
    vector<ll> ans;
    string d3 = intToDigit(s);
    ll rd1 = d1.size()-1;
    ll rd3 = d3.size()-1;
    // cout << d1 << "\n";
    // cout << d3 << "\n";
    while(rd1>=0 && rd3>=0){
        ll n1 = d1[rd1] - '0';
        ll n2 = d3[rd3] - '0';
        if(n2>=n1){
            ans.push_back(n2 - n1);
            rd1 -= 1;
            rd3 -= 1;
        }
        else{
            if(rd3>=1){
                n2 = (d3[rd3 - 1] - '0') * 10 + (d3[rd3] - '0');
                // cout << "n2" << n2 << "\n";
                if(n2>=n1 && n2-n1<=9){
                    ans.push_back(n2 - n1);
                    // cout << n2 - n1;
                }
                else{
                    cout << -1 << "\n";
                    return;
                }
                rd3 -= 2;
                rd1 -= 1;
            }
            else{
                cout << -1 << "\n";
                return;
            }
        }
    }
    if(rd1>=0){
        cout << -1 << "\n";
        return;
    }
    while (rd3 >= 0)
    {
        ans.push_back(d3[rd3]-'0');
        rd3--;
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