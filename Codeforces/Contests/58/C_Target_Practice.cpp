#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
char arr[10][10];
forn(i,10){
    forn(j,10){
        cin>>arr[i][j];
    }
}
ll ans=0;
forn(i,10){
    forn(j,10){
        if(arr[i][j]=='X'){
            if(i==0 || i==9){
              ans++;
            }
            else if(i==1 || i==8){
                if(j<1 || j>10-2){
                    ans++;
                }
                else{
                    ans+=2;
                }
            }
            else if(i==2 || i==7){
                if(j==0 || j==10-1){
                    ans++;
                }
                else if(j==1 || j==10-2){
                    ans+=2;
                }
                else{
                    ans+=3;
                }
            }
            else if(i==3 || i==6){
                if(j==0 || j==10-1){
                    ans++;
                }
                else if(j==1 || j==10-2){
                    ans+=2;
                }
                else if(j==2 || j==10-3){
                    ans+=3;
                }
                else{
                    ans+=4;
                }
            }
            else{
                 if(j==0 || j==10-1){
                    ans++;
                }
                else if(j==1 || j==10-2){
                    ans+=2;
                }
                else if(j==2 || j==10-3){
                    ans+=3;
                }
                else if(j==3 || j==10-4){
                    ans+=4;
                }
                else{
                    ans+=5;
                }
            }
        }
    }
}
cout<<ans<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}