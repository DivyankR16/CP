#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    char a, b, c;
    cin >> a >> b >> c;
    if(a=='<'){
        if(c=='<'){
            cout << "B" << "\n";
        }
        else{
            if(b=='<'){
                cout << "C" << "\n";
            }
            else{
                cout << "A" << "\n";
            }
        }
    }
    else{
        if(b=='<'){
            cout << "A" << "\n";
        }
        else{
            if(c=='<'){
                cout << "C" << "\n";
            }
            else{
                cout << "B" << "\n";
            }
        }
    }
}
int main(){
ios_base:: sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
solve();
return 0;
}