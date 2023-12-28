#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    char a[3][3];
    forn(i,3){
        forn(j,3){
            cin >> a[i][j];
        }
    }
    forn(i,3){
        bool isA = false;
        bool isB = false;
        bool isC = false;
        bool isN = false;
        forn(j,3){
           if(a[i][j]=='A'){
               isA = true;
           }
           if (a[i][j] == 'B')
           {
               isB = true;
           }
           if (a[i][j] == 'C')
           {
               isC = true;
           }
           if(a[i][j]=='?'){
               isN = true;
           }
        }
        if(isN){
            if(!isA){
                cout << 'A' << "\n";
            }
            if (!isB)
            {
                cout << 'B' << "\n";
            }
            if (!isC)
            {
                cout << 'C' << "\n";
            }
            return;
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