#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    string s;
    cin >> s;
    string hh = s.substr(0, 2);
    string mn = s.substr(3, 2);
    ll hr = stoi(hh);
    string ans = "";
    if(hr<=12){
        if(hh=="00"){
            hh = "12";
        }
        ans.append(hh);
        ans.append(":");
        ans.append(mn);
        ans.append(" ");
        if(hr==12){
            ans.append("PM");
        }
        else{
        ans.append("AM");
        }
        cout << ans << "\n";
    }
    else{
        hr = hr % 12;
        string need = "";
        while(hr){
            need += ((hr % 10) + '0');
            hr /= 10;
        }
        reverse(need.begin(), need.end());
        if(need.size()==1){
            need.append("0");
            reverse(need.begin(), need.end());
        }
        ans.append(need);
        ans.append(":");
        ans.append(mn);
        ans.append(" ");
        ans.append("PM");
        cout << ans << "\n";
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