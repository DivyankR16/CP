#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    // for (ll i = 0; i < 5;i++){
    //     if(i==2 && s[i]=='A'){
    //         cout << 'A' << "\n";
    //         return;
    //     }
    //     else{
    //         cout << 'B' << "\n";
    //         return;
    //     }
    // }
    if(s[2]=='A'){
        cout << 'A' << "\n";
    }
    else{
        cout << 'B' << "\n";
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