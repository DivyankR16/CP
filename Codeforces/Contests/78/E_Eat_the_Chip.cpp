#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll h, w, xa, ya, xb, yb;
    cin >> h >> w >> xa >> ya >> xb >> yb;
    if(xa>=xb){
        cout << "Draw\n";
        return;
    }
    if((xb-xa)%2){
        //Alice will win if catch
        ll move = 1; // Alice turn
        while(xa<xb){
            if(move){
                if(ya<yb){ //chase
                    ya++;
                }
                else if(ya>yb){//chase
                    ya--;
                }
                xa++;
            }
            else{
                if(ya<yb){//run
                    yb++;
                    yb = min(yb, w);
                }
                else if(ya>yb){//run
                    yb--;
                    yb = max(1ll, yb);
                }
                xb--;
            }
            if(xa==xb && ya==yb){ // Catching condition
                cout << "Alice\n";
                return;
            }
            move ^= 1;
        }
    }
    else{
        //Bob will win if catch
        ll move = 1;//Alice turn
        while(xa<xb){
           if(move){//run
              if(ya<yb){
                  ya--;
                  ya = max(1ll, ya);
              }
              else if(ya>yb){
                  ya++;
                  ya = min(ya, w);
              }
              xa++;
           }
           else{//chase
              if(ya<yb){
                  yb--;
              }
              else if(ya>yb){
                  yb++;
              }
              xb--;
           }
           if(xa==xb && ya==yb){
               cout << "Bob\n";
               return;
           }
           move ^= 1;
        }
    }
    cout << "Draw"
         << "\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}