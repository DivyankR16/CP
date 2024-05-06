#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll a, b, c;
    cin >> a >> b >> c;
    ll lvl = 0;
    while(a>((1<<lvl)-1)){
        lvl++;
    }
    ll lft = (1 << lvl) - 1 - a;
    ll curwid = (1 << (lvl + 1)) - 1 - (1 << (lvl)) + 1-2*lft;
    // lft /= 2;
    ll val = min(b, lft);
    b -= val;
    lft -= val;
    curwid += val;
    if(lft || (lft==b)){
        curwid += lft;
        if(c!=curwid){
            cout << -1 << "\n";
        }
        else{
            cout << lvl<< "\n";
        }
    }
    else{
        while(b>=curwid && curwid!=0){
            lvl++;
            b -= curwid;
        }
        if(b)lvl++;
        if(c!=curwid){
            cout << -1 << "\n";
        }
        else{
            cout << lvl << "\n";
        }
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