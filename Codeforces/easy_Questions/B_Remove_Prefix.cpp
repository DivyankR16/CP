#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int elesz=n;
    vector<int>a(n);
    map<int,int>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
        m[a[i]]++;
    }
    int ans=0;
    int pos=0;
    while(m.size()!=elesz){
        ans++;
        m[a[pos]]--;
        if(m[a[pos]]==0){m.erase(a[pos]);}
        elesz--;
        pos++;
    }
    cout<<ans<<endl;
    }
    
return 0;
}