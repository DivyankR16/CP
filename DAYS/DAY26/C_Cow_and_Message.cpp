#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
string s;
	cin >> s;
	ll n = s.size();
	ll ans = 0;
	vector<ll> c(26);
	for (ll i = 0; i < n; i++) c[s[i] - 'a']++;
	for (ll i = 0; i < c.size(); i++) ans = max(ans, c[i]);
	vector<vector<ll> > a(26, vector<ll>(26));
	for (ll i = 0; i < n; i++) {
		ll x = s[i] - 'a';
		c[x]--;
		for (ll j = 0; j < c.size(); j++) a[x][j] += c[j];
	}
 
	for (ll i = 0; i < a.size(); i++)
		for (ll j = 0; j < a[i].size(); j++) ans = max(ans, a[i][j]);
	cout << ans << endl;
}
int main(){
solve();
return 0;
}