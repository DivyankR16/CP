#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    string s;
    cin >> s;
    if(s.size()>=3 && s.substr(0,2)=="10" && s[2]!='0' && stoi(s.substr(2))>=2){
        cout << "YES" << "\n";
        return;
    }
    cout << "NO" << "\n";
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