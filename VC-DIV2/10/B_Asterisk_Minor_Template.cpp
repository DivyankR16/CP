#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    string a, b;
    cin >> a >> b;
    ll n = a.size();
    ll m= b.size();
    if(a[0]==b[0]){
        cout << "YES"
             << "\n";
        string ans = "";
        ans += a[0];
        ans += '*';
        cout << ans << "\n";
        return;
    }
    if(a[n-1]==b[m-1]){
        cout << "YES"
             << "\n";
        string ans = "";
        ans += '*';
        ans += a[n-1];
        cout << ans << "\n";
        return;
    }
    if(n>=m){
        for (ll i = 0; i < m - 1;i++){
            string str = "";
            str += b[i];
            str += b[i + 1];
            if (a.find(str) != string::npos)
            {
                cout << "YES"
                     << "\n";
                string ans = "";
                ans += '*';
                ans.append(str);
                ans += '*';
                cout << ans
                     << "\n";
                return;
            }
        }
        cout << "NO"
             << "\n";
    }
    else{
        for (ll i = 0; i < n - 1; i++)
        {
            string str = "";
            str += a[i];
            str += a[i + 1];
            if (b.find(str) != string::npos)
            {
                cout << "YES"
                     << "\n";
                string ans = "";
                ans += '*';
                ans.append(str);
                ans += '*';
                cout <<ans
                     << "\n";
                return;
            }
        }
        cout << "NO"
             << "\n";
    }
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}