#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    char t;
    cin >> t;
    map<char, vector<ll>> mp;
    forn(i,2*n){
        string s;
        cin >> s;
        mp[s[1]].push_back(s[0]-'0');
    }
    vector<string> ans;
    vector<string> lnt;
    for(auto i:mp){
        if(i.first!=t){
            sort(i.second.begin(), i.second.end());
            for (ll j = 0; j < i.second.size();j+=2){
                if(j+1<i.second.size()){
                    string need = "";
                    need += (i.second[j] + '0');
                    need += i.first;
                    need += ' ';
                    need+=(i.second[j + 1] + '0');
                    need += i.first;
                    ans.push_back(need);
                }
                else{
                    string need = "";
                    need += (i.second[j] + '0');
                    need += i.first;
                    lnt.push_back(need);
                }
            }
        }
    }
    if(mp[t].size()<lnt.size() || (mp[t].size()-lnt.size())%2==1){
        cout << "IMPOSSIBLE"
             << "\n";
        return;
    }
    ll mv = 0;
    sort(mp[t].begin(), mp[t].end());
    for (ll i = 0; i < mp[t].size();i++){
        if(mv>=lnt.size()){
            string need = "";
            need += (mp[t][i] + '0');
            need += t;
            need += ' ';
            need += (mp[t][i + 1] + '0');
            need += t;
            ans.push_back(need);
            i++;
            continue;
        }
        string need = "";
        need += lnt[mv++];
        need += ' ';
        need += (mp[t][i] + '0');
        need += t;
        ans.push_back(need);
    }
    for(auto i:ans){
        cout << i << "\n";
    }
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