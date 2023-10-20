#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
ll ans(string s){
    if(s.size()==0){
        return 1;
    }
    ll sum = 0;
    for (ll i = 0; i <= 1;i++){
        string temp = s.substr(0, i + 1);
        if(stoll(temp)<=26){
            string newstr = s.substr(i + 1);
            sum+=ans(newstr);
        }
        if(s.size()<=1)
           break;
    }
    return sum;
}
void solve(){
    string s;
    cin >> s;
    cout << "Total number of answers are:-> " << ans(s)<< "\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}