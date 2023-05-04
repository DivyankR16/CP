#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int s;
    cin>>s;
    int count=0;
    int ans=0;
    int val=9;
    while(s>val && val!=0){
        ans+=round(pow(10,count))*val;
        count++;
        s=s-val;
        val--;
    }
    ans=ans+round(pow(10,count))*s;
    cout<<ans<<endl;
}
return 0;
}