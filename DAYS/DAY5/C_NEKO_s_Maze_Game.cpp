#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,q;
cin>>n>>q;
bool is1blck=false;
bool is2blck=false;
ll nodiffle1=0;
bool rasta[2][n];
forn(i,2){
    forn(j,n){
        rasta[i][j]=1;
    }
}
ll noofrow1block=0;
ll noofrow2block=0;
forn(i,q){
    ll r,c;
    cin>>r>>c;
    if(!i){
        rasta[r-1][c-1]=0;
        cout<<"Yes"<<"\n";
        if(r==1){
            noofrow1block++;
        }
        else{
            noofrow2block++;
        }
        continue;
    }
          if(r==1){
            if(rasta[r-1][c-1]){
              rasta[r-1][c-1]=0;
              if(c-2>=0 && rasta[r][c-2]==0){
                nodiffle1++;
              }
              if(c<n && rasta[r][c]==0){
                nodiffle1++;
              }
              if(rasta[r][c-1]==0){
                 nodiffle1++;
              }
            noofrow1block++;
            }
            else{
                rasta[r-1][c-1]=1;
                if(c-2>=0 && rasta[r][c-2]==0){
                    nodiffle1--;
                }
                if(c<n && rasta[r][c]==0){
                    nodiffle1--;
                }
                if(rasta[r][c-1]==0){
                    nodiffle1--;
                }
                noofrow1block--;
            }
        }
        else{
            if(rasta[r-1][c-1]){
              rasta[r-1][c-1]=0;
              if(c-2>=0 && rasta[r-2][c-2]==0){
                nodiffle1++;
              }
              if(c<n && rasta[r-2][c]==0){
                nodiffle1++;
              }
              if(rasta[r-2][c-1]==0){
                nodiffle1++;
              }
            noofrow2block++;
            }
            else{
                rasta[r-1][c-1]=1;
                if(c-2>=0 && rasta[r-2][c-2]==0){
                    nodiffle1--;
                }
                if(c<n && rasta[r-2][c]==0){
                    nodiffle1--;
                }
                if(rasta[r-2][c-1]==0){
                    nodiffle1--;
                }
                noofrow2block--;
            }

            }
            if(!noofrow1block || !noofrow2block){
        cout<<"Yes"<<"\n";
    }
    else{
        if(!nodiffle1){
            cout<<"Yes"<<"\n";
        }
        else{
            cout<<"No"<<"\n";
        }
        
    }

}
}
int main(){
solve();
return 0;
}