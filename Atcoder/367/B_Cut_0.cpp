#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    string s;
    cin>>s;
    ll n = s.size();
    while(s.back()=='0'){
        s.pop_back();
    }
    if(s.back()=='.'){
        s.pop_back();
    }
    cout << s << "\n";
}
int main(){
ios_base:: sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
solve();
return 0;
}