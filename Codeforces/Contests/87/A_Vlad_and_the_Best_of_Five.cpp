#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    string s;
    cin >> s;
    ll cnt[2];
    cnt[0] = 0;
    cnt[1] = 0;
    forn(i,s.size()){
        cnt[s[i] - 'A']++;
    }
    if(cnt[0]>cnt[1]){
        cout << "A"
             << "\n";
    }
    else{
        cout << "B"
             << "\n";
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