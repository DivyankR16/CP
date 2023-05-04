#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
string n;
cin >> n;
string a = n, b = n;
bool f = true;
for (ll i=0; i<n.size(); i++)
{
    ll v = n[i]-'0';
    if (v%2==0)
    {
        a[i]=char(v/2+'0');
        b[i]=char(v/2+'0');
    }
    else
    {
        if(f)
        {
            a[i]=char(v/2+1+'0');
            b[i]=char(v/2+'0');
            f=false;
        }
        else
        {
            a[i]=char(v/2+'0');
            b[i]=char(v/2+1+'0');
            f=true;
        }
    }
}
ll i=0;
while(i<a.size()-1 && a[i]=='0')
    i++;
cout<<a.substr(i)<<" ";
i =0;
while(i<b.size()-1 && b[i]=='0')
    i++;
cout<<b.substr(i)<<"\n";
    }
signed main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}