#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, m, k;
    cin >> n >> m >> k;
    vector<pair<ll, ll>> segments;
    forn(i,m){
        ll l, r;
        cin >> l >> r;
        l--;
        r--;
        segments.push_back({l, r});
    }
    sort(segments.begin(), segments.end());
    set<pair<ll, ll>> rainBegin; // Rain starting at day=i.second and city=i.first
    set<pair<ll, ll>> rainEnd;   // Rain ending at day=i.second and city=i.first
    for (ll i = 0; i < m;i++){
        rainBegin.insert({segments[i].first, i});
    }
    vector<ll> citiesRain1(m, 0);     // citiesRain1[i]->Maximum number of cities rain on a particular day i once or ith segment associated with cities raining once
    map<pair<ll,ll>,ll> citiesRain2;     // citiesRain2[{x,y}]->Number of cities rain twice with segment associated with day x,y
    ll ans = 0;
    ll cities_rainingfreq = 0;
    for (ll i = 0; i < n;i++){
       while(!rainBegin.empty()){
           auto top = *rainBegin.begin();
           ll start = top.first;
           if(start>i)break;
           ll index = top.second;
           rainBegin.erase(top);
           cities_rainingfreq++;
           rainEnd.insert({segments[index].second+1, index});
       }
       while(!rainEnd.empty()){
           auto top = *rainEnd.begin();
           ll end = top.first;
           if(end>i)break;
        //    ll index = top.second;
           cities_rainingfreq--;
           rainEnd.erase(top);
       }
       if(cities_rainingfreq==0){
           ans++;
       }
       else if(cities_rainingfreq==1){
           citiesRain1[rainEnd.begin()->second]++;
       }
       else if(cities_rainingfreq==2){
           citiesRain2[{rainEnd.begin()->second, rainEnd.rbegin()->second}]++;
       }
    }
    ll temp = 0;
    ll max1 = -1;
    ll maxidx1 = -1;
    ll max2 = -1;
    ll maxidx2 = -1;
    for (ll i = 0; i < m;i++){
         if(citiesRain1[i]>max1){
           max1 = citiesRain1[i];
           maxidx1 = i;
         }
    }
    for (ll i = 0; i < m;i++){
        if(citiesRain1[i]>max2 && i!=maxidx1){
           max2 = citiesRain1[i];
           maxidx2 = i;
        }
    }
    temp = max1 + max2;
    for(auto it:citiesRain2){
        ll l = it.first.first;
        ll r = it.first.second;
        temp = max(temp, citiesRain1[l] + citiesRain1[r] + it.second);
    }
    cout << ans + temp << "\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}