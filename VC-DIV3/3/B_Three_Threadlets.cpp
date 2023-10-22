#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll a, b, c;
    cin >> a >> b >> c;
    ll arr[3];
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    sort(arr, arr + 3);
    if(arr[0]==arr[1]){
        if (arr[2] == arr[1] || arr[2] == 2 * arr[1] || arr[2] == 3 * arr[1] || arr[2] == 4 * arr[1]){
            cout << "YES"
                 << "\n";
        }
        else{
            cout << "NO"
                 << "\n";
        }
    }
    else{
        if(arr[1]%arr[0]==0 && arr[2]%arr[0]==0 && arr[1]/arr[0]-1 + arr[2]/arr[0]-1<=3){
            cout << "YES"
                 << "\n";
        }
        else{
            cout << "NO"
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