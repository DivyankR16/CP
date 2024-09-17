#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    vector<string> a;
    forn(i,n){
        string s;
        cin >> s;
        a.push_back(s);
    }
    for (ll i = 0; i < n - 2;i++){
        if(a[i]=="sweet" && a[i+1]=="sweet"){
            cout<<"No"<<"\n";
            return;
        }
    }
    cout << "Yes" << "\n";
}
int main(){
ios_base:: sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
solve();
return 0;
}