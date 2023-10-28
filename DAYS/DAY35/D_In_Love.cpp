#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void func(multiset<ll>&leftSegments, multiset<ll>&rightSegments){
    if (leftSegments.size() >= 2 && rightSegments.size() >= 2)
    {
        if ((*(leftSegments.rbegin())) > (*(rightSegments.begin())))
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
    }
    else
    {
        cout << "NO"
             << "\n";
    }
}
void solve(){
    ll q;
    cin >> q;
    multiset<ll> leftSegments;
    multiset<ll> rightSegments;
    while(q--){
        char c;
        cin >> c;
        if(c=='+'){
            ll l, r;
            cin >> l >> r;
            leftSegments.insert(l);
            rightSegments.insert(r);
            func(leftSegments, rightSegments);
        }
        else{
            ll l, r;
            cin >> l >> r;
            leftSegments.erase(leftSegments.find(l));
            rightSegments.erase(rightSegments.find(r));
            func(leftSegments, rightSegments);
        }
    }
}
int main(){
solve();
return 0;
}