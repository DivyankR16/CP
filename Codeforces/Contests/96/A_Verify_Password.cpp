#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    char pc =' ';
    char pd =' ';
    for (ll i = 0; i < n;i++){
        if(s[i]>='0' && s[i]<='9'){
            if(pc!=' '){
                cout << "NO" << "\n";
                return;
            }
            if(pd==' '){
                pd = s[i];
            }
            else{
                if(s[i]>=pd){
                    pd = s[i];
                }
                else{
                    cout << "NO" << "\n";
                    return;
                }
            }
        }
        else{
            if(pc==' '){
                pc = s[i];
            }
            else{
                if(s[i]>=pc){
                    pc = s[i];
                }
                else{
                    cout << "NO" << "\n";
                    return;
                }
            }
        }
    }
    cout << "YES" << "\n";
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