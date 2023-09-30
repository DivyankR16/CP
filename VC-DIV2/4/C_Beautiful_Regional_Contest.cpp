#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
ll i=0;
ll g=0;ll s=0;ll b=0;
        while(i<n && a[i]==a[0]){
            g++;
            i++;
        }
        while(i<(n/2) && s<=g){
            ll match=a[i];
            while(i<n && a[i]==match){
                s++;
                i++;
            }
        }
 
        while(i<(n/2) && b<=g){
            ll match=a[i];
            while(i<n && a[i]==match){
                b++;
                i++;
            }
        }
 
        while(i<(n/2)){
            ll match=a[i];
            ll prev_i=i;
            while(i<n && a[i]==match){
                b++;
                i++;
            }
            if(i>(n/2)){
                b-=(i-prev_i);
                i=(n/2);
            }
        }
 
        if(g==0 || b==0 || s==0)g=s=b=0;
        else if(g>=s || g>=b)g=s=b=0;
        else if(i>(n/2))g=s=b=0;
        else if((g+s+b)>(n/2))g=s=b=0;
        cout<<g<<' '<<s<<' '<<b<<'\n';

}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}