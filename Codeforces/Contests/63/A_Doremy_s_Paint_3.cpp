#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    map<ll, ll> cnt;
    forn(i, n)
    {
        cnt[a[i]]++;
    }
    if(n%2==1){
        if(cnt.size()==2){
            ll one = -1;
            ll two = -1;
            for (auto i : cnt)
            {
                if (one == -1)
                {
                    one = i.second;
                }
                else{
                    two = i.second;
                }
           }
            if(abs(one-two)==1){
                cout << "Yes"
                     << "\n";
            }
            else{
                cout << "No"
                     << "\n";
            }
        }
        else if(cnt.size()==1){
            cout << "Yes"
                 << "\n";
        }
        else{
            cout << "No"
                 << "\n";
        }
    }
    else{
        if (cnt.size() == 2)
        {
            ll one = -1;
            ll two = -1;
            for (auto i : cnt)
            {
                if (one == -1)
                {
                    one = i.second;
                }
                else
                {
                    two = i.second;
                }
            }
            if (abs(one - two) == 0)
            {
                cout << "Yes"
                     << "\n";
            }
            else
            {
                cout << "No"
                     << "\n";
            }
        }
        else if (cnt.size() == 1)
        {
            cout << "Yes"
                 << "\n";
        }
        else
        {
            cout << "No"
                 << "\n";
        }
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
