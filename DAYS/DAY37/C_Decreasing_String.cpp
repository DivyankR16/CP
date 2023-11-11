#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
// void func(){
//     vector<bool> skip(n, 0);
//     pos--;
//     ll sz = n - 1;
//     ll itr = 1;
//     ll skipidx = 0;
//     bool isforward = true;
//     ll fk = 0;
//     while (pos - (sz - itr) >= 0 && fk < n)
//     {
//         if (skipidx >= n)
//         {
//             skipidx = n - 1;
//             isforward = false;
//         }
//         if (isforward)
//         {
//             while (skipidx < n - 1 && s[skipidx] < s[skipidx + 1])
//             {
//                 skipidx++;
//             }
//             skip[skipidx] = 1;
//             pos -= (sz - itr);
//             itr++;
//             skipidx++;
//         }
//         else
//         {
//             while (skipidx >= 0 && skip[skipidx] == 1)
//             {
//                 skipidx--;
//             }
//             skip[skipidx] = 1;
//             itr++;
//             skipidx--;
//         }
//         fk++;
//     }
//     ll cnt = 0;
//     cout << pos << "\n";
//     forn(i, n)
//     {
//         if (skip[i] == 0)
//         {
//             cnt++;
//             if (cnt - 1 == pos)
//             {
//                 cout << s[i] << "\n";
//                 break;
//             }
//         }
//     }
// }
void solve(){
string s;
cin >> s;
ll pos;
cin >> pos;
ll n = s.size();
ll curlen = n ;
pos--;
bool terminate = pos < curlen;
s += '0';
vector<char> stk;
for (ll i = 0; i < n+1;i++){
    while(!terminate && !stk.empty() && stk.back()>s[i]){
        pos -= curlen;
        curlen--;
        stk.pop_back();
        if(pos<curlen)
            terminate = true;
    }
    stk.push_back(s[i]);
}
cout << stk[pos];
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}