#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
string s;
cin>>s;
ll stisfy=0;
ll notstisfy=0;
for(ll i=0;i<n/2;i++){
    if(s[i]==s[n-i-1]){
        stisfy++;
    }
    else{
        notstisfy++;
    }
}
if(n%2==0){
  for(ll i=0;i<=n;i++){
    if(i<notstisfy){
        cout<<0;
    }
    else{
        if(notstisfy%2==1){
           if(i%2==1 && i<=(notstisfy+2*stisfy)){
            cout<<1;
           }
           else{
            cout<<0;
           }
        }
        else{
             if(i%2==0 && i<=(notstisfy+2*stisfy)){
            cout<<1;
           }
           else{
            cout<<0;
           }

        }
    }
  }
  cout<<"\n";
}
else{
   for(ll i=0;i<=n;i++){
    if(i<notstisfy){
        cout<<0;
    }
    else{
        if(notstisfy%2==1){
            if(i%2==1 && i<=(notstisfy+2*stisfy)){
                cout<<1;
            }
            else{
                if(i-1<=(notstisfy+2*stisfy)){
                    cout<<1;
                }
                else{
                    cout<<0;
                }
            }
        }
        else{
            if(i%2==0 && i<=(notstisfy+2*stisfy)){
                cout<<1;
            }
            else{
                if(i-1<=(notstisfy+2*stisfy)){
                    cout<<1;
                }
                else{
                    cout<<0;
                }
            }
        }
    }
   }
cout<<"\n";
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