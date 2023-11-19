#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    ll i = 0;
    ll j = n - 1;
    vector<char> seq;
    vector<ll> prev;
    if(a[i]<a[j]){
        seq.push_back('L');
        prev.push_back(a[i]);
        i++;
    }
    else{
        seq.push_back('R');
        prev.push_back(a[j]);
        j--;
    }
    while(i<=j){
        if(a[i]>prev[prev.size()-1] || a[j]>prev[prev.size()-1]){
        if(a[i]<a[j] && a[i]>prev[prev.size()-1]){
            seq.push_back('L');
            prev.push_back(a[i]);
            i++;
        }
        else{
            seq.push_back('R');
            prev.push_back(a[j]);
            j--;
        }
        }
        else{
            break;
        }
    }
    cout << seq.size() << "\n";
    for (auto i : seq){
        cout << i;
    }
    cout << "\n";
}
int main(){
solve();
return 0;
}